#include <stdio.h>
int main() {
    double x[100];
    double y[100];
    printf("Enter the number of data points: ");
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    while(i < num){
    scanf("%lf,%lf", &x[i], &y[i]);
    i++;
    }
   
    double k = 0;
    double b = 0;
   double learning_rate = 0.01;
int iter = 0;
 double yu = 0;
    while(iter<1000){
         double wu;
        double dk = 0;
        double db = 0;
        int i = 0;
        while(i<num){
      
        yu = k*x[i] + b;
        wu = y[i] - yu;
        dk = dk-2*wu*x[i];
        db = db-2*wu;
        i++;
    }
     iter++;
    dk = dk/num;
    db = db/num;
    k = k - learning_rate*dk;
    b = b - learning_rate*db;
   
    printf("loss=%lf\n", wu*wu);
    }
    printf("k=%lf, b=%lf", k, b);
    return 0;
}
