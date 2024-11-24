#include <stdio.h>

int main() {
    int num[10];
    int cnt = 0;
    int i = 0;
    double sum = 0;
    
    while(i!= -1) {
        scanf("%d",&i);
        num[cnt] = i;
        cnt++;
        sum = sum + i;
    }
    sum = sum + 1;
    cnt = cnt - 1;
    printf("sum is %f\n",sum);
     double avg;
        avg = sum / cnt;
        printf("average is %f\n",avg);
    for (int a = 0; a < cnt; a ++){
       
        if (num[a]>avg){
            printf("%d ",num[a]);
        }

       
    }
    return 0;
}