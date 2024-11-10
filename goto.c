#include <stdio.h>

int main() {
    int i ;
int one = 1;
    int two = 1;
    int five = 1;

    scanf("%d", &i);

    while(one<10*i){
        one++;
        while(two<5*i){
            two ++;
            while(five<2*i){
                five ++;
                if(one*1+two*2+five*5 == i*10){
                printf("%d*1jiao+ %d*2jiao+ %d*5jiao= %dyuan\n", one, two, five, i);
              
                }
           

            }
        }
    }

    return 0;
}