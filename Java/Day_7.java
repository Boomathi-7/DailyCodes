// Get a number from user and subtract 5 to that number and print the result.

import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        n -= 5;
        System.out.println(n);
    }
}
