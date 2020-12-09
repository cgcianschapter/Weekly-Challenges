import java.util.*;
class cupcakes
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		for(int i = 0; i < n; i++)
		{
		    int cake = sc.nextInt();
		    System.out.println(cake/2 + 1);
		}
	}
}
