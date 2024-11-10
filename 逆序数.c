#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &y);

    if (y == 0) {
        printf("0");
    }


    while (y != 0) {

        x = y % 10;//个位
        y = y / 10;//去掉个位
        printf("%d", x);
    }
    return 0;
}