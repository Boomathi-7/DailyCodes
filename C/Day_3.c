//Input from user and printing

#include <stdio.h>
int main(){
    int num;
    char name[10];
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number is %d\n", num);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Name entered is %s\n", name);
    return 0;
}
