// Get a three-digit number from user and print the sum of digits

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int digit_1 = n/100;
        int digit_3 = n%10;
        int digit = n/10;
        int digit_2 = digit%10;
        System.out.println(digit_1 + digit_2 + digit_3);
    }
}
