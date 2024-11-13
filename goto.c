#include <stdio.h>

int main() {
    int x, one, two, five;
    //scanf("%d", &x);
    x = 3;
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
}