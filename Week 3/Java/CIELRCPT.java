import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for( int a = 0; a < n; a++) {
            int c = 0;
		    int p = sc.nextInt();
		    int i = 12;
		    while(p != 0) {
		        if(Math.pow(2, i-1) <= p) {
		            p = p - (int)(Math.pow(2, i-1));
                    c++;
                } else {
                    i--;
                }
		    }
            System.out.println(c);  
		}
    }
}

