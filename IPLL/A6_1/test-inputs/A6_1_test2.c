int printStr(char *ch);
int printInt(int n);
int main(){
    int a[10];
    int i;
    for(i=0;i<10;i=i+1){
        a[i] = i;
    }
    for(i=0;i<10;i=i+1){
        printInt(a[i]);
        printStr(" ");
    }
    printStr("\n");
    int j;
    for(j=0;j<10;j=j+1){
        a[j] = a[j] + 2;
        a[j] = a[j] - 1;
        a[j] = a[j] * 2;
        a[j] = a[j] / 2;
    }
    j = 0;
    for(j = 0;j<10;j=j+1){
        printInt(a[j]);
        printStr(" ");
    }
    printStr("\n");
    return 0;
}
