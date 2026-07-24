// Get a four-digit number from user and only reverse the last two digits of the number, then print the number

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int digit_12 = n/100;
        int digit_4 = n%10;
        int digit = n%100;
        int digit_3 = digit/10;
        System.out.println(digit_12*100 + digit_4*10 + digit_3);
    }
}
