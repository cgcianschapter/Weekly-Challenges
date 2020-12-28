import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		int temp, ar[];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ar = new int[t];
        for(int i = 0; i < t; i++) {
            ar[i] = sc.nextInt();
        }
        Arrays.sort(ar);
        for(int i = 0; i < t; i++) {
            System.out.println(ar[i]);
        }
	}
}

