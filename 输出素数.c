#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
int b = 1;
    for(int a = 2;a<x;a++){
        if(x%a==0){
            b = 0;
            break;
        };

    }
    if(b == 1){
    printf("is su shu.");
    }else {
        printf("isn't su shu");
    }
    return 0;
}
