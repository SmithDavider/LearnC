#include <stdio.h>
#define y (k*x)
int main() {
 double x0, x1, x2, y0, y1, y2;
    scanf("%lf,%lf %lf,%lf %lf,%lf"
    ,&x0,&y0,&x1,&y1,&x2,&y2);
    double k1=0, k2=0.01;
     double  b, c;
    b=( y0*y0 + y1*y1 + y2*y2)
   -2*(x0*y0+x1*y1+x2*y2)*k1
   +(x0*x0+x1*x1+x2*x2)*k1*k1;
c = ( y0*y0 + y1*y1 + y2*y2)
   -2*(x0*y0+x1*y1+x2*y2)*k2
   +(x0*x0+x1*x1+x2*x2)*k2*k2;

   while(b>c){k1=k1+0.01;
k2=k2+0.01;
b=( y0*y0 + y1*y1 + y2*y2)
  -2*(x0*y0+x1*y1+x2*y2)*k1
   +(x0*x0+x1*x1+x2*x2)*k1*k1;
c = ( y0*y0 + y1*y1 + y2*y2)
   -2*(x0*y0+x1*y1+x2*y2)*k2
   +(x0*x0+x1*x1+x2*x2)*k2*k2;
printf("%f %f %f\n",k1,k2,b-c);
 }
double k = (k1+k2)/2;
printf("%f\n",k);
return 0;
}


   
