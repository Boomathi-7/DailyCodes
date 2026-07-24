// Get a two-digit number from user and print the reverse of the number

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int digit_1 = n/10;
        int digit_2 = n%10;
        System.out.println(digit_2*10+digit_1);
    }
}
