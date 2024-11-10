#include <stdio.h>  
int main()  
{  printf("enter yourheight in foot,inch,"
"such as \"5 7\"explaining 5foot 7inch:");  
 float foot, inch;  
 scanf("%f %f", &foot, &inch);  
 printf("your height is %f m.\n",((foot + inch / 12.0 )* 0.3048)
 );  
 return 0;  
}