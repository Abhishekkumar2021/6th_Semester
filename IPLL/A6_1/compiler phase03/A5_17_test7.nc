int factorial(int n) {
if (n == 0)
return 1;
else
return n * factorial(n-1);
}
int main() {
int n = 5;
int r;
r = factorial(n);
printInt(n);
printStr("! = ");
printInt(r);
return 0;
}
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 9, b = 3;
    gcd(a, b);
    binpow(++a, b++);
    return 0;
}
