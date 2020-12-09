import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
        float withdrawAmount = sc.nextFloat();
        float initAmount = sc.nextFloat();
        if((withdrawAmount + 0.50f) <= initAmount && withdrawAmount % 5 == 0)
        {
            initAmount = initAmount - withdrawAmount - 0.50f;
            System.out.println(initAmount);
        }
        else 
        {
            System.out.println(initAmount);
        }
	}
}

