#include <stdio.h>
//用switch语句实现分段函数
/*x<0时，输出-1；x=0时，
输出0；x>0时，输出2x*/
int main() {
    int x;
    scanf("%d", &x);  

  
  switch(x){
    case -1:
    printf("-1/n");
    break;
    case 0:
    printf("0/n");
    break;
    case 1:
    printf("2x/n");
  }
  return 0;
}
    

    