#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

struct LBG{
    double **curr_codebook;
    double **new_codebook;
    double **data;
    int *cluster;
    double *distortion;
    int *cluster_size;
    double **cluster_sum;
    double total_distortion;
    int curr_size;
    int max_size;
    int max_iter;
    int n_iter;
    double alpha;
    int n;
    int d;
};


void init(struct LBG *lbg, int n, int d, int M, int max_iter, double alpha, double **data){
    lbg->n = n;
    lbg->d = d;
    lbg->max_iter = max_iter;
    lbg->max_size = M;
    lbg->curr_size = 1;
    lbg->alpha = alpha;

    // copy data to lbg
    lbg->data = (double **)malloc(n*sizeof(double *));
    for(int i=0; i<n; i++){
        lbg->data[i] = (double *)malloc(d*sizeof(double));
        for(int j=0; j<d; j++){
            lbg->data[i][j] = data[i][j];
        }
    }

    // initialize codebook
    lbg->curr_codebook = (double **)malloc(lbg->max_size*sizeof(double *));
    for(int i=0; i<lbg->max_size; i++){
        lbg->curr_codebook[i] = (double *)malloc(d*sizeof(double));
    }

    // initialize new codebook
    lbg->new_codebook = (double **)malloc(lbg->max_size*sizeof(double *));
    for(int i=0; i<lbg->max_size; i++){
        lbg->new_codebook[i] = (double *)malloc(d*sizeof(double));
    }

    // initialize cluster
    lbg->cluster = (int *)malloc(n*sizeof(int));

    // initialize distortion
    lbg->distortion = (double *)malloc(n*sizeof(double));


    // initialize cluster_size
    lbg->cluster_size = (int *)malloc(lbg->max_size*sizeof(int));
    for(int i=0; i<lbg->max_size; i++){
        lbg->cluster_size[i] = 0;
    }

    // initialize cluster_sum
    lbg->cluster_sum = (double **)malloc(lbg->max_size*sizeof(double *));
    for(int i=0; i<lbg->max_size; i++){
        lbg->cluster_sum[i] = (double *)malloc(d*sizeof(double));
        for(int j=0; j<d; j++){
            lbg->cluster_sum[i][j] = 0;
        }
    }

    // initialize total_distortion
    lbg->total_distortion = 0;
}

// Initialisation of codebook
void initialize_codebook(struct LBG *lbg){
    // find centroid of whole data
    double *centroid = (double *)malloc(lbg->d*sizeof(double));
    memset(centroid, 0, lbg->d*sizeof(double));
    for(int i=0; i<lbg->n; i++){
        for(int j=0; j<lbg->d; j++){
            centroid[j] += lbg->data[i][j];
        }
    }
    for(int i=0; i<lbg->d; i++){
        centroid[i] /= lbg->n;
    }

    // initialize curr_codebook with centroid
    for(int i=0; i<lbg->d; i++){
        lbg->curr_codebook[0][i] = centroid[i];
    }
}

// Splitting of codebook
void split_codebook(struct LBG *lbg){
    // Double the size of codebook with alpha
    for(int i=0; i<lbg->curr_size; i++){
        for(int j=0; j<lbg->d; j++){
            // delete current codeword from new_codebook and replace it with 2 new codewords
            lbg->new_codebook[i][j] = lbg->curr_codebook[i][j] *(1 + lbg->alpha);
            lbg->new_codebook[i+lbg->curr_size][j] = lbg->curr_codebook[i][j]*(1 - lbg->alpha);
        }
    }
    lbg->curr_size *= 2;
}

// calculate distortion
double get_distortion(struct LBG *lbg){
    double distortion = 0;
    for(int i=0; i<lbg->n; i++){
        distortion += lbg->distortion[i];
    }
    return distortion;
}

void assign(struct LBG *lbg){
    // Assign data to clusters
    for(int i=0; i<lbg->n; i++){
        double min_dist = 1e9;
        int min_index = 0;
        for(int j=0; j<lbg->curr_size; j++){
            double dist = 0;
            for(int k=0; k<lbg->d; k++){
                dist += pow(lbg->data[i][k] - lbg->new_codebook[j][k], 2);
            }
            if(dist < min_dist){
                min_dist = dist;
                min_index = j;
            }
        }
        lbg->cluster[i] = min_index;
        lbg->cluster_size[min_index]++;
        for(int j=0; j<lbg->d; j++){
            lbg->cluster_sum[min_index][j] += lbg->data[i][j];
        }
        lbg->distortion[i] = min_dist*min_dist;
    }
}

void update(struct LBG *lbg){
    // Update codebook with new centroids
    int maxi = 0;
    for(int k=0; k<lbg->curr_size; k++){
        if(lbg->cluster_size[k] > lbg->cluster_size[maxi]){
            maxi = k;
        }
    }
    for(int i=0; i<lbg->curr_size; i++){
        for(int j=0; j<lbg->d; j++){
            if(lbg->cluster_size[i] != 0){
                lbg->curr_codebook[i][j] = lbg->cluster_sum[i][j]/lbg->cluster_size[i];
            }
            else{
                // handle empty cluster
                int random = rand() % 2;
                if(random == 0){
                    lbg->curr_codebook[i][j] = lbg->curr_codebook[maxi][j] - lbg->alpha;
                }
                else{
                    lbg->curr_codebook[i][j] = lbg->curr_codebook[maxi][j] + lbg->alpha;
                }
            }
        }
    }
}

int check_convergence(struct LBG *lbg){
    // check if distortion has converged
    double curr_distortion = get_distortion(lbg);
    if(fabs(curr_distortion - lbg->total_distortion)/curr_distortion < lbg->alpha){
        return 1;
    }
    else{
        lbg->total_distortion = curr_distortion;
        return 0;
    }
}

// LBG Algorithm
void run(struct LBG *lbg){
    initialize_codebook(lbg);
    int iter = 0;

    while(iter < lbg->max_iter && lbg->curr_size < lbg->max_size){
        // Split codebook
        split_codebook(lbg);

        // Assign data to clusters
        assign(lbg);

        // Update codebook with
        update(lbg);

        // check if distortion has converged
        if(check_convergence(lbg)){
            break;
        }

        // clear cluster_sum and cluster_size
        for(int i=0; i<lbg->curr_size; i++){
            for(int j=0; j<lbg->d; j++){
                lbg->cluster_sum[i][j] = 0;
            }
            lbg->cluster_size[i] = 0;
        }
        
        iter++;
        printf("Iteration: %d, Distortion: %lf \n", iter, lbg->total_distortion);
    }
}

void free_LBG(struct LBG *lbg){
    for(int i=0; i<lbg->n; i++){
        free(lbg->data[i]);
    }
    free(lbg->data);

    for(int i=0; i<lbg->max_size; i++){
        free(lbg->curr_codebook[i]);
    }
    free(lbg->curr_codebook);

    for(int i=0; i<lbg->max_size; i++){
        free(lbg->new_codebook[i]);
    }
    free(lbg->new_codebook);

    free(lbg->cluster);
    free(lbg->distortion);
    free(lbg->cluster_size);
    for(int i=0; i<lbg->max_size; i++){
        free(lbg->cluster_sum[i]);
    }
    free(lbg->cluster_sum);
    free(lbg);
}

void save_codebook(struct LBG *lbg, char *filename){
    FILE *fp = fopen(filename, "w");
    for(int i=0; i<lbg->curr_size; i++){
        for(int j=0; j<lbg->d; j++){
            if(j == lbg->d-1){
                fprintf(fp, "%lf", lbg->curr_codebook[i][j]);
            }
            else{
                fprintf(fp, "%lf,", lbg->curr_codebook[i][j]);
            }
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

struct DataGenerator
{
    int n;
    int d;
    int k;
    double **data;
    double **centroids;
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
}

void generate_data(struct DataGenerator* self)
{
    for(int i = 0; i < self->k; i++)
    {
        for(int j = 0; j < self->d; j++)
        {
            self->centroids[i][j] = rand() % 100 + 100;
        }
    }

    // Points around the centroids
    for(int i = 0; i < self->n; i++)
    {
        int cluster = rand() % self->k;
        for(int j = 0; j < self->d; j++)
        {
            self->data[i][j] = self->centroids[cluster][j] + (rand() % 100 - 50);
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
        if(i == self->d-1){
            fprintf(fp, "%s%d", column_name, i+1);
        }
        else{
            fprintf(fp, "%s%d,", column_name, i+1);
        }
    }
    for(int i = 0; i < self->n; i++)
    {
        for(int j = 0; j < self->d; j++)
        {
            if(j == self->d-1){
                fprintf(fp, "%lf,", self->data[i][j]);
            }
            else{
                fprintf(fp, "%lf,", self->data[i][j]);
            }
        }
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
            token = strtok(NULL, ",");
            col++;
        }
        row++;
    }
    self->n = row;
    self->d = col;

    // Initialize data
    self->data = (double**)malloc(self->n * sizeof(double*));
    for(int i = 0; i < self->n; i++)
    {
        self->data[i] = (double*)malloc(self->d * sizeof(double));
    }

    // move the file pointer to the beginning of the file
    fseek(fp, 0, SEEK_SET);
    row = 0;
    col = 0;
    while(fgets(line, 1024, fp))
    {
        char *token = strtok(line, ",");
        col = 0;
        while(token)
        {
            self->data[row][col] = atof(token);
            token = strtok(NULL, ",");
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
    free(self);
}



int main(){
    srand(time(NULL));  // Initialization, should only be called once.
    struct DataGenerator *generator = (struct DataGenerator *)malloc(sizeof(struct DataGenerator));
    // initialize_generator(generator, 1000, 2, 3);
    // generate_data(generator);
    read_data(generator, "universe.csv");
    // save_data(generator);

    struct LBG *lbg = (struct LBG *)malloc(sizeof(struct LBG));
    init(lbg, generator->n, generator->d, 1024, 300, 0.02, generator->data);
    run(lbg);

    // Save codebook to csv file
    save_codebook(lbg, "codebook.csv");
    return 0;
}