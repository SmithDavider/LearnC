#include <stdio.h>
#include <limits.h>
 
int main()
{
   printf("sizeof(int) = %d \n", sizeof(int));
   printf("sizeof(long) = %d \n", sizeof(long));
   printf("sizeof(long long) = %d \n", sizeof(long long));
   printf("sizeof(float) = %d \n", sizeof(float));
   printf("sizeof(double) = %d \n", sizeof(double));
   printf("sizeof(long double) = %d \n", sizeof(long double));
   printf("%d",3/9);
   
   return 0;
}
//C语言中，小数默认是double类型，整数默认是int类型。
//sizeof()函数可以用来查看变量或数据类型占用内存的大小。