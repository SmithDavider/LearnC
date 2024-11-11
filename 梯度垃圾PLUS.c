#include <stdio.h>
#define y (k*x)
int main() {
    double x0, x1, x2, y0, y1, y2;

    scanf("%lf,%lf %lf,%lf %lf,%lf"
        , &x0, &y0, &x1, &y1, &x2, &y2);

    double k1 = 0, k2 = 0.0001;

    double  b=0, c=0;
  
   /*b = (y0 * y0 + y1 * y1 + y2 * y2)
        - 2 * (x0 * y0 + x1 * y1 + x2 * y2) * k1
        + (x0 * x0 + x1 * x1 + x2 * x2) * k1 * k1;

    c = (y0 * y0 + y1 * y1 + y2 * y2)
        - 2 * (x0 * y0 + x1 * y1 + x2 * y2) * k2
        + (x0 * x0 + x1 * x1 + x2 * x2) * k2 * k2;*/

            do {
       
             b = (y0 - k1 * x0) * (y0 - k1 * x0) 
                 + (y1 - k1 * x1) * (y1 - k1 * x1)
                 + (y2 - k1 * x2) * (y2 - k1 * x2);

             c = (y0 - k2 * x0) * (y0 - k2 * x0) 
                 + (y1 - k2 * x1) * (y1 - k2 * x1)
                 + (y2 - k2 * x2) * (y2 - k2 * x2);

              k1 = k1 + 100 * (b - c);

              k2 = k2 + 100 * (b - c);

            printf("%f %f loss=%f\n", k1, k2, (b + c) / 2);
          
            double k = (k1 + k2) / 2;

            printf("%f\n", k);

            if (b - c < 0.0000000001) {
                break;
            }
            } while (b > c);
   
    return 0;
}



