#include <stdio.h>

int main() {
    int i = 0;
    while (i < 1000000000) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}//Ctrl+C 终止程序