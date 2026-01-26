//Relational Operators/ Comparison Operators

#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Equal? %d\n", num1==num2);
    printf("Not Equal? %d\n", num1!=num2);
    printf("Less than? %d\n", num1<num2);
    printf("Greater than? %d\n", num1>num2);
    printf("Less than or Equal? %d\n", num1<=num2);
    printf("Greater than or Equal? %d\n", num1>=num2);
    return 0;
}
