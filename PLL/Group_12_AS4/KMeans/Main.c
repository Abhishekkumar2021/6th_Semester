#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

// Structure to store all the data related to KMeans
struct KMeans
{
    int k;                          // Number of clusters
    int n;                          // Number of data points
    int d;                          // Number of dimensions, i.e. features
    int max_iter;                   // Maximum number of iterations
    int *cluster;                   // Cluster number of each data point
    double **data;                  // Data points
    double **centroids;             // Centroids of each cluster
    double **old_centroids;         // Old centroids of each cluster
    double *distance;               // Distance of a data point from all the centroids
    double **feature_sum;           // Sum of all the features of a cluster for calculating the new centroid
    double *cluster_inertia ;      // Sum of the distances of all the data points from their respective centroids
    int *cluster_count;              // Number of data points in a cluster
    int n_iter;                     // Number of iterations taken to converge
    double inertia;                 // Sum of all the cluster inertias

};

void initialize_kmeans(struct KMeans *kmeans, int n, int d, int k, int max_iter){
    kmeans->n = n;
    kmeans->d = d;
    kmeans->k = k;
    kmeans->max_iter = max_iter;
    kmeans->cluster = (int *)malloc(n * sizeof(int));
    kmeans->data = (double **)malloc(n * sizeof(double *));
    kmeans->cluster_count = (int *)malloc(k * sizeof(int));
    for(int i=0; i<n; i++)
    {
        kmeans->data[i] = (double *)malloc(d * sizeof(double));
    }
    kmeans->centroids = (double **)malloc(k * sizeof(double *));
    kmeans->old_centroids = (double **)malloc(k * sizeof(double *));
    kmeans->feature_sum = (double **)malloc(k * sizeof(double *));
    for(int i=0; i<k; i++)
    {
        kmeans->centroids[i] = (double *)malloc(d * sizeof(double));
        kmeans->old_centroids[i] = (double *)malloc(d * sizeof(double));
        kmeans->feature_sum[i] = (double *)malloc(d * sizeof(double));
    }
    kmeans->distance = (double *)malloc(k * sizeof(double));
    kmeans->cluster_inertia = (double *)malloc(k * sizeof(double));
}

double euclidean_distance(double *point1, double *point2, int d){
    double dist = 0;
    for(int i=0; i<d; i++)
    {
        dist += pow(point1[i] - point2[i], 2);
    }
    return sqrt(dist);
}

void initialize_centroids(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->k; i++)
    {
        int idx = rand() % kmeans->n;
        for(int j=0; j<kmeans->d; j++)
        {
            kmeans->centroids[i][j] = kmeans->data[idx][j];
        }
    }
}

void assign_clusters(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->n; i++)
    {
        for(int j=0; j<kmeans->k; j++)
        {
            kmeans->distance[j] = euclidean_distance(kmeans->data[i], kmeans->centroids[j], kmeans->d);
        }
        int min_index = 0;
        for(int j=1; j<kmeans->k; j++)
        {
            if(kmeans->distance[j] < kmeans->distance[min_index])
            {
                min_index = j;
            }
        }

        kmeans->cluster[i] = min_index;
        kmeans->cluster_count[min_index]++;

        for(int j=0; j<kmeans->d; j++)
        {
            kmeans->feature_sum[min_index][j] += kmeans->data[i][j];
        }
    }
}

void update_centroids(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->k; i++)
    {
        for(int j=0; j<kmeans->d; j++)
        {
            kmeans->old_centroids[i][j] = kmeans->centroids[i][j];
            kmeans->centroids[i][j] = kmeans->feature_sum[i][j] / kmeans->cluster_count[i];
        }
    }
}

int check_convergence(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->k; i++)
    {
        for(int j=0; j<kmeans->d; j++)
        {
            if(kmeans->old_centroids[i][j] != kmeans->centroids[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

void get_cluster_inertia(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->k; i++)
    {
        kmeans->cluster_inertia[i] = 0;
    }
    for(int i=0; i<kmeans->n; i++)
    {
        kmeans->cluster_inertia[kmeans->cluster[i]] += euclidean_distance(kmeans->data[i], kmeans->centroids[kmeans->cluster[i]], kmeans->d);
    }
}

double get_inertia(struct KMeans *kmeans)
{
    double inertia = 0;
    // Sum of all cluster inertias
    for(int i=0; i<kmeans->k; i++)
    {
        inertia += kmeans->cluster_inertia[i];
    }
    return inertia;
}

void fit_kmeans(struct KMeans *kmeans, double **data)
{
    for(int i=0; i<kmeans->n; i++)
    {
        for(int j=0; j<kmeans->d; j++)
        {
            kmeans->data[i][j] = data[i][j];
        }
    }

    initialize_centroids(kmeans);
    int iter = 0;
    while(iter<kmeans->max_iter)
    {
        // Reset cluster count and feature sum
        for(int i=0; i<kmeans->k; i++)
        {
            kmeans->cluster_count[i] = 0;
            for(int j=0; j<kmeans->d; j++)
            {
                kmeans->feature_sum[i][j] = 0;
            }
        }
        assign_clusters(kmeans);
        update_centroids(kmeans);
        if(check_convergence(kmeans))
        {
            break;
        }
        iter++;                                                         
    }
    get_cluster_inertia(kmeans);
    kmeans->inertia = get_inertia(kmeans);
    kmeans->n_iter = iter;
}

void set_centroids(struct KMeans *kmeans, double **centroids)
{
    for(int i=0; i<kmeans->k; i++)
    {
        for(int j=0; j<kmeans->d; j++)
        {
            kmeans->centroids[i][j] = centroids[i][j];
        }
    }
}

void free_memory_kmeans(struct KMeans *kmeans)
{
    for(int i=0; i<kmeans->n; i++)
    {
        free(kmeans->data[i]);
    }
    free(kmeans->data);
    for(int i=0; i<kmeans->k; i++)
    {
        free(kmeans->centroids[i]);
        free(kmeans->old_centroids[i]);
        free(kmeans->feature_sum[i]);
    }
    free(kmeans->centroids);
    free(kmeans->old_centroids);
    free(kmeans->feature_sum);
    free(kmeans->cluster);
    free(kmeans->distance);
    free(kmeans->cluster_count);
    free(kmeans->cluster_inertia);
    free(kmeans);
}

void print_data(double **data, int n, int d)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < d; j++)
        {
            printf("%lf ", data[i][j]);
        }
        printf("\n");
    }
}

//  Data Generator
struct DataGenerator
{
    int n;
    int d;
    int k;
    double **data;
    double **centroids;
    int *cluster_labels;
};

void initialize_generator(struct DataGenerator* self, int n, int d, int k)
{
    self->n = n;
    self->d = d;
    self->k = k;
    self->data = (double**)malloc(n * sizeof(double*));
    for(int i = 0; i < n; i++)
    {
        self->data[i] = (double*)malloc(d * sizeof(double));
    }
    self->centroids = (double**)malloc(k * sizeof(double*));
    for(int i = 0; i < k; i++)
    {
        self->centroids[i] = (double*)malloc(d * sizeof(double));
    }
    self->cluster_labels = (int*)malloc(n * sizeof(int));
}

void generate_data(struct DataGenerator* self)
{
    for(int i = 0; i < self->k; i++)
    {
        for(int j = 0; j < self->d; j++)
        {
            self->centroids[i][j] = rand() % 200 - 100;
        }
    }

    // Points around the centroids
    for(int i = 0; i < self->n; i++)
    {
        int cluster = rand() % self->k;
        self->cluster_labels[i] = cluster;
        for(int j = 0; j < self->d; j++)
        {
            self->data[i][j] = self->centroids[cluster][j] + (rand() % 40 - 20);
        }
    }
}

// Save data to csv file
void save_data(struct DataGenerator* self){
    FILE *fp = NULL;
    char filename[100];
    sprintf(filename, "data.csv");
    fp = fopen(filename, "w");
    if(fp == NULL)
    {
        printf("Error opening file %s for writing data to csv file\n", filename);
        exit(1);
    } 
    // get column name from the file name
    char *column_name = strtok(filename, ".");
    for(int i=0; i<self->d; i++)
    {
        fprintf(fp, "%s_%d,", column_name, i);
    }
    fprintf(fp, "cluster\n");
    for(int i = 0; i < self->n; i++)
    {
        for(int j = 0; j < self->d; j++)
        {
            fprintf(fp, "%f,", self->data[i][j]);
        }
        fprintf(fp, "%d\n", self->cluster_labels[i]); // Cluster label
    }
    fclose(fp);
}

// read data from a csv file
void read_data(struct DataGenerator* self, char *filename){
    FILE *fp = NULL;
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("Error opening file %s for reading data from csv file\n", filename);
        exit(1);
    } 
    char line[1024];
    int row = 0;
    int col = 0;
    while(fgets(line, 1024, fp))
    {
        char *token = strtok(line, ",");
        col = 0;
        while(token)
        {
            col++;
            token = strtok(NULL, ",");
        }
        row++;
    }
    self->n = row;
    self->d = col;

    // // Initialize data
    self->data = (double**)malloc(self->n * sizeof(double*));
    for(int i = 0; i < self->n; i++)
    {
        self->data[i] = (double*)malloc(self->d * sizeof(double));
    }
    // self->cluster_labels = (int*)malloc(self->n * sizeof(int));

    // move the file pointer to the beginning of the file
    fseek(fp, 0, SEEK_SET);
    row = 0;
    while(fgets(line, 1024, fp))
    {
        col = 0;
        while(col < self->d)
        {
            char *token = strtok(line, ",");
            self->data[row][col] = atof(token);
            col++;
        }
        row++;
    }
    fclose(fp);
}

void free_memory_generator(struct DataGenerator* self)
{
    for(int i = 0; i < self->n; i++)
    {
        free(self->data[i]);
    }
    free(self->data);
    for(int i = 0; i < self->k; i++)
    {
        free(self->centroids[i]);
    }
    free(self->centroids);
    free(self->cluster_labels);
    free(self);
}

// Final Kmeans classifier
struct KMeansClassifier
{
    int n;
    int d;
    int k;
    int max_iter;
    double inertia;
    double **data;
    struct KMeans* kmeans;
};

void initialize_classifier(struct KMeansClassifier* self, int n, int d, int k, int max_iter, double **data)
{
    self->n = n;
    self->d = d;
    self->k = k;
    self->max_iter = max_iter;
    self->data = (double**)malloc(n * sizeof(double*));
    self->inertia = INFINITY;
    for(int i = 0; i < n; i++)
    {
        self->data[i] = (double*)malloc(d * sizeof(double));
        for(int j = 0; j < d; j++)
        {
            self->data[i][j] = data[i][j];
        }
    }
}

void fit_classifier(struct KMeansClassifier* self)
{
    for(int i = 0; i < self->max_iter/5; i++){
        struct KMeans* kmeans = (struct KMeans*)malloc(sizeof(struct KMeans));
        initialize_kmeans(kmeans, self->n, self->d, self->k, self->max_iter);
        fit_kmeans(kmeans, self->data);
        double curr_inertia = kmeans->inertia;
        if(curr_inertia < self->inertia)
        {
            self->inertia = curr_inertia;
            self->kmeans = kmeans;
        }else{
            free_memory_kmeans(kmeans);
        }
    }
}

void free_memory_classifier(struct KMeansClassifier* self)
{
    for(int i = 0; i < self->n; i++)
    {
        free(self->data[i]);
    }
    free(self->data);
    free_memory_kmeans(self->kmeans);
    free(self);
}

// save the model to a file
void save_model(struct KMeansClassifier* self, char *filename){
    FILE *fp = NULL;
    fp = fopen(filename, "w");
    if(fp == NULL)
    {
        printf("Error opening file %s for writing model to file\n", filename);
        exit(1);
    } 
    fprintf(fp, "Number of data points: %d\n", self->n);
    fprintf(fp, "Number of features: %d\n", self->d);
    fprintf(fp, "Number of clusters: %d\n", self->k);
    fprintf(fp, "Inertia: %f\n", self->inertia);
    fprintf(fp, "Centroids:\n");
    for(int i = 0; i < self->k; i++)
    {
        for(int j = 0; j < self->d; j++)
        {
            fprintf(fp, "%f ", self->kmeans->centroids[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);

    // Save labels to a csv file
    char *label_filename = "labels.csv";
    fp = fopen(label_filename, "w");
    if(fp == NULL)
    {
        printf("Error opening file %s for writing labels to file\n", label_filename);
        exit(1);
    }
    fprintf(fp, "cluster\n");
    for(int i = 0; i < self->n; i++)
    {
        fprintf(fp, "%d\n", self->kmeans->cluster[i]);
    }
    fclose(fp);
}

// Elbow method to find the optimal number of clusters
void elbow_method(struct DataGenerator* generator, int max_k){
    FILE *fp = NULL;
    fp = fopen("elbow.csv", "w");
    if(fp == NULL)
    {
        printf("Error opening file elbow.csv for writing elbow method to file\n");
        exit(1);
    }
    printf("Running elbow method to find the optimal number of clusters...\n");
    fprintf(fp, "Clusters,Inertia\n");
    for(int k = 1; k <= max_k; k++)
    {
        struct KMeansClassifier* classifier = (struct KMeansClassifier*)malloc(sizeof(struct KMeansClassifier));
        initialize_classifier(classifier, generator->n, generator->d, k, 300, generator->data);
        fit_classifier(classifier);
        fprintf(fp, "%d,%f\n", k, classifier->inertia);
        free_memory_classifier(classifier);
        printf("%d clusters done\n", k);
    }
    fclose(fp);
}

int main()
{
    srand(time(NULL));
    struct DataGenerator* generator = (struct DataGenerator*)malloc(sizeof(struct DataGenerator));
    // initialize_generator(generator, 1000, 2, 3);
    // generate_data(generator);
    read_data(generator, "universe.csv");
    // save_data(generator);
    // elbow_method(generator, 8);
    int optimal_k = 10;
    struct KMeansClassifier* classifier = (struct KMeansClassifier*)malloc(sizeof(struct KMeansClassifier));
    initialize_classifier(classifier, generator->n, generator->d, optimal_k, 300, generator->data);
    fit_classifier(classifier);
    save_model(classifier, "model.txt");
    free_memory_generator(generator);
    free_memory_classifier(classifier);
    return 0;
} 