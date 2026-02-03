// Get a two-digit number from user and print the one’s digit

#include <stdio.h>
int main(){
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("One's digit: %d", num%10);
    return 0;
}
