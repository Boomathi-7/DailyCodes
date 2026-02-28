// Get a two-digit number from user and make the one’s digit as 0, then print it

#include <stdio.h>
int main(){
    int num, digit1;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    digit1 = num/10;
    printf("Result: %d", (digit1*10));
    return 0;
}
