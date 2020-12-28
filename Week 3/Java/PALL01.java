import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	static int reverse(int num) {
        int rev = 0;
        while(num > 0) {
            int d = num % 10;
            rev = rev * 10 + d;
            num = num / 10;
        }
        return rev;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int ar[];
        ar = new int[t];
        for(int i = 0; i < t; i++) {
            ar[i] = sc.nextInt();
        }
        for(int j = 0; j < t; j++) {
            if(ar[j] == reverse(ar[j])) {
                System.out.println("wins");
            } else {
                System.out.println("loses");
            }
        }
    }
}

