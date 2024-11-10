#include <stdio.h>

int main() {
    int cm;
    printf("Enter the length in cm: ");
    scanf("%d", &cm);
    int foot,inch ;
    foot = cm /30.48;
    inch = cm / 2.54;
    printf("%d %d\n",foot,inch - foot*12);
 return 0;
}