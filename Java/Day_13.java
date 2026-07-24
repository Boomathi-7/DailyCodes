// Get a three-digit number from user and print the hundred’s digit

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        n /= 100;
        System.out.println(n);
    }
}
