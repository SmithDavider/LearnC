#include <stdio.h>

int main() {
double a,sum = 0;
int count = 0;
do {
    scanf("%lf", &a);
    sum = a+sum;
    count++;
    printf("The sum is: %f\n", sum);
    printf("The count is: %d\n", count);
} while (a != -1);

printf("The average is: %f\n", (sum+1)/(count-1));
return 0;
}