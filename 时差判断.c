#include <stdio.h>
int main() {
    int h1=0, m1=0, h2=0
    , m2=0, a=0, b=0;
    scanf("%d %d",&h1, &m1);
    scanf("%d %d", &h2, &m2);
    a=h2-h1;
    b=m2-m1;
    if(b<0){
        a--;
       b = 60+b;
    }
    printf("%d:%d",a,b);
    return 0;
    }