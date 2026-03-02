// Get a two-digit number from user and make the ten’s digit as 1, then print it

#include <stdio.h>
int main(){
    int num, digit2;
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);
    digit2 = num%10;
    printf("Result: %d", (10+digit2));
    return 0;
}
