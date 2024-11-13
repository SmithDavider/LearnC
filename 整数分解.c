#include <stdio.h>
// 12345%10000=2345num
// 12345/10000=1-->b
// 2345num%1000yu=345num
// 2345/1000=2->
// 345%100=45
// 345/100=3->
// 45%10=5
// 45/10=4->
// 5%1=5
int main() {
    int num, b;
scanf("%d", &num);
int yu = 1;
int flag ;
flag = num;

printf("flag=%d\n", flag);
printf("num=%d\n", num);
while (flag>9){
    yu = yu*10;
    flag = flag/10;
} ;
printf("yu=%d\n", yu);

//printf("%d/n", num);

do {
   
    b = num/yu;
    printf("%d", b);
    if (yu>9){
        printf(" ");
    };
     num = num%yu;
    yu = yu/10;

} while (yu>0);
printf("\n");

return 0;
}