#include <stdio.h>

int main() {

    int i,n = 0;
    scanf("%d", &i);

    do {n++;
    i =i/ 10;}while(i>0);

    printf("%d", n);

    return 0;
}