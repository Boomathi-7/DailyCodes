// Get a four-digit number from user and only reverse the last two digits of the number, then print the number

#include <stdio.h>
int main(){
    int num, digit_12, digit, digit_3, digit_4, result;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    digit_12 = num/100;
    digit = num%100;
    digit_3 = digit/10;
    digit_4 = num%10;
    result = (digit_12*100)+(digit_4*10)+digit_3;
    printf("Result: %d", result);
    return 0;
}
