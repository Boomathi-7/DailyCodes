// Get a number from user and subtract 5 to that number and print the result.

#include <stdio.h>

int main(){
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = num - 5;
    printf("Answer: %d", res);
    return 0;
}
