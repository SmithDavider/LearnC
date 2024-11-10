#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age <= 35){
        printf("Young is nice,");

    }

    printf("Your age determines your matal status,so please be careful.");
    return 0;
}