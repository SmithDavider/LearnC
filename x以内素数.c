#include<stdio.h>
int main()
{
    int i ;
    
    for (i = 2; i < 100; i++){

    int isPrime = 1;
    int j;
        for (j = 2; j<i ; j++){
            if (i % j == 0){
                isPrime = 0;
             
            }}
            if (isPrime == 1){
                printf("%d ", i);
            }
       
    }
    return 0;
}