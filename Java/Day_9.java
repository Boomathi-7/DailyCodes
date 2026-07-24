// Get a number from user and divide by 6 and print the quotient

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        num /= 6;
        System.out.println(num);
    }
}
