// Get a two-digit number from user and print the one’s digit

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        n %= 10;
        System.out.println(n);
    }
}
