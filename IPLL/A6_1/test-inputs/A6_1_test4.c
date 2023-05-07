int printInt(int num);
int printStr(char * c);
int readInt(int *eP);

void swap(int *p, int *q) {
int t;
t = *p;
*p = *q;
*q = t;
return;
}

int main() {
int x;
int y;
int ep;
x= readInt(&ep);
y =readInt(&ep);
printStr("Before swap:\n");
printStr("x = "); printInt(x);
printStr(" y = "); printInt(y);
swap(&x, &y);
printStr("\nAfter swap:\n");
printStr("x = "); printInt(x);
printStr(" y = "); printInt(y);
return 0;
}

