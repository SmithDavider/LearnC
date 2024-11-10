#include <stdio.h>
#include <math.h>
int main()
{
    double a=0,b=0;
    printf("Enter two numbers:");
    scanf("%lf %lf",&a,&b);

    printf("%f + %f = %f\n",a,b,a+b);
    printf("%f - %f = %f\n",a,b,a-b);
    printf("%f * %f = %f\n",a,b,a*b);
    printf("%f / %f = %f\n",a,b,a/b);
    return 0;
}