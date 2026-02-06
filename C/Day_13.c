// Get a three-digit number from user and print the hundred’s digit

#include <stdio.h>
int main(){
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("Hundred's digit: %d", num/100);
    return 0;
}
