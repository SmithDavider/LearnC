#include <stdio.h>

int main() {
int type; 
    scanf("%d", &type);
switch (type)
{
case 1:
    printf("Good Morning\n");
    break;
    case 2:
    printf("Good Afternoon\n");
    break;
    case 3:
    printf("Good Evening\n");
    break;

default:
printf("WHAT ARE YOU SAYING?")
   ; 
}
return 0;
}