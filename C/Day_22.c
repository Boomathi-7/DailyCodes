// Get a three-digit number from user and make the one’s digit as 2, then print it

#include <stdio.h>
int main(){
    int num, digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    digit = num/10;
    printf("Result: %d", (digit*10)+2);
    return 0;
}
