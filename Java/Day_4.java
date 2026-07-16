// Arithmatic Operators

import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        System.out.println("Addition: " + (num1+num2));
        System.out.println("Difference: " + (num1-num2));
        System.out.println("Multiplication: " + (num1*num2));
        System.out.println("Division: " + (num1/num2));
        System.out.println("Modulus: " + (num1%num2));
    }
}
