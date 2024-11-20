#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;

    a = 1.23f;
    b = 2.34f;
    c = 3.57f;
   //if (fabs(c-a-b)<1e-36) {
   if (c == a + b) {
    printf("right\n");
    } else {
    printf("wrong\n");
    }
    return 0;
}