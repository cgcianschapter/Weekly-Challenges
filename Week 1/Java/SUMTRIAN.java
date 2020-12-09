import java.util.*;
import java.math.*;
class sumTrain
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for(int t = 0; t < num; t++) 
        {
            int n = sc.nextInt();
            int ar[][] = new int[n][n];
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    ar[i][j] = sc.nextInt();
                }
            }
            for(int x = 1; x < n; x++)
            {
                for(int y = 0; y <= x; y++)
                {
		            if(y == 0)
		            {
		                ar[x][y] = ar[x][y] + ar[x-1][y];
		            }
		            else
		            {
		                ar[x][y] = Math.max(ar[x][y] + ar[x-1][y], ar[x][y] + ar[x-1][y-1]);
		            }
		        }
            }
            Arrays.sort(ar[n-1]);
            System.out.println(ar[n-1][n-1]);
        }
    }
}
