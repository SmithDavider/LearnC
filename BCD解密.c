#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);

    b = a % 16;
c = a / 16;
printf("0x%d",c*10+b);
return 0;
}