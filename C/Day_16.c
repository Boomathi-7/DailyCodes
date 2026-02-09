// Get a two-digit number from user and print the reverse of the number

#include <stdio.h>
int main(){
    int num, digit1, digit2, reverse;
    printf("Enter a two-digit number:");
    scanf("%d", &num);
    digit1 = num/10;    //Ten's digit
    digit2 = num%10;    //One's digit
    reverse = (digit2*10)+digit1;
    printf("Reversed number: %d", reverse);
    return 0;
}
