import java.util.*;
class Luckyfour
{
    public static void main(String[] args)
    {
        int num[];
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        num = new int[size];
        for(int i = 0; i < size; i++)
        {
            int n1 = sc.nextInt();
            int c = 0;
            while(n1 != 0)
            {
                if(n1 % 10 == 4)
                {
                    c++;
                }
                n1 = n1 / 10;
            }
            num[i] = c; 
        }
        for(int j = 0; j < size; j++)
        {
            System.out.println(num[j]);
        }
    }
}
