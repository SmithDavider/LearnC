/*#include <stdio.h>

int main() {
int n, i;
double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum =sum + 1.0/i;
    }
    printf("f(%d) = %f", n,sum);
    return 0;
}*/

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    int fu = -1;                //int fu = 1; 
                              // for循环里就加上fu = -fu;
    for (i = 1; i <= n; i++) {                  
        sum =sum + fu*1.0/i;//第一项符号为负
       
    }
    printf("f(%d) = %f", n,sum);
    return 0;
}