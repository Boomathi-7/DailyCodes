// Get a three-digit number from user and print the ten's digit

#include <stdio.h>
int main(){
    int num, res1, res2;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    res1 = num%100;
    res2 = res1/10;
    printf("Ten's digit: %d", res2);
    return 0;
}
