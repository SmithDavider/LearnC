#include <stdio.h>

int main() {
    int x ,one ,two ,five ;
    scanf("%d",&x);
    for ( one = 1 ; one <= x*10 ; one++ ){
    for ( two = 1 ; two <= x*10/2 ; two++ ){
    for ( five = 1 ; five <= x*10/5 ; five++ ){
            if ( one*2 + two*5 + five*10 == x ) {
                printf("%d %d %d%d",one,two,five,x);
                }
            }
        }
    }
    return 0;
}