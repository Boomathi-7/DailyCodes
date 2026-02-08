// Get a three-digit nmber from user and print the sum of digits

#include <stdio.h>
int main(){
    int num, digit, digit_1, digit_2, digit_3;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    digit_1 = num/100;
    digit_3 = num%10;
    digit = num%100;
    digit_2 = digit/10;
    printf("Sum of digits: %d", digit_1+digit_2+digit_3);
    return 0;
}
