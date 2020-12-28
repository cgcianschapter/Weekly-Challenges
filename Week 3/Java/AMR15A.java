import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int ar[];
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ar = new int[n];
        for(int i = 0; i < n; i++) {
            ar[i] = sc.nextInt();
        }
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(ar[j] % 2 == 0) {
                count++;
            }
        }
        if(count > n / 2) {
            System.out.println("READY FOR BATTLE");
        } else {
            System.out.println("NOT READY");
        }
	}
}

