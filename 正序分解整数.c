#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    for(;n>0;n/10) {
    a = n-n/10*10;
    printf("%d", a/n);}
    return 0;
}
