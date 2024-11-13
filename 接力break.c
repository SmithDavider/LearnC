#include <stdio.h>

int main() {
    int i ;
int one = 1;
    int two = 1;
    int five = 1;
    int x = 2;

    scanf("%d", &i);

    while(one<10*i){ two =1; 
        while(two<5*i){five = 1;
            while(five<2*i){
                if(one*1+two*2+five*5 == i*10){
                     printf("%d*1jiao+ %d*2jiao+ %d*5jiao= %dyuan\n", one, two, five, i);
              x = 1;
                }
                 five ++;
                 if(x==1){break;}
                 }
            two ++;
             if(x==1){break;}}
       one++;
        if(x==1){break;}}

    return 0;
}


/*#include <stdio.h>

int main() {
    int x, one, two, five;
    //scanf("%d", &x);
    x = 2;
    for (one = 1; one < x * 10; one++) {
        for (two = 1; two < x * 10 / 2; two++) {
            for (five = 1; five < x * 10 / 5; five++) {
                if (one * 1 + two * 2 + five * 5 == x*10) {
                    printf("%d*1jiao+ %d*2jiao+ %d*5jiao= %dyuan\n", one, two, five, x);
                    goto end;
                }
            }
        }
    }
    end:
    return 0;
}*/