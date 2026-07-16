// Relational Operators/ Comparison Operators

import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        System.out.println("Equal? " + (num1==num2));
        System.out.println("Not Equal? " + (num1!=num2));
        System.out.println("Less than? " + (num1<num2));
        System.out.println("Greater than? " + (num1>num2));
        System.out.println("Less than or equal? " + (num1<=num2));
        System.out.println("Greater than or equal? " + (num1>=num2));
    }
}
