// Get a three-digit number from user and make the ten’s digit as 0, then print it

#include <stdio.h>
int main(){
    int num, digit1, digit3;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    digit1 = num/100;
    digit3 = num%10;
    printf("Result: %d", (digit1*100)+digit3);
    return 0;
}
