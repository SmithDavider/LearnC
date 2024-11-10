#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));//设置随机数种子
    int num = rand() % 100 + 1;
    //生成1到100之间的随机数
    int guess = 0;
    int count = 0;
    printf("猜数游戏,请输入1到100之间的数字：");
    do {
        scanf("%d", &guess);
        count++;
        if (guess < num) {
            printf("太小了，请再试一次：");
        } else if (guess > num) {
            printf("太大了，请再试一次：");
        }
    } while (guess!= num);
    printf("恭喜你，猜对了！共猜了%d次。", count);
    return 0;
}   
