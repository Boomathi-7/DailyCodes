// Get a four-digit number from user, reverse only the first two digits of the number, then print the number

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int digit_1 = n/100;
        int digit_3 = n%10;
        int digit = n/10;
        int digit_2 = digit%10;
        System.out.println(digit_2*100 + digit_1*10 + digit_3);
    }
}
