import java.util.Scanner;

class Solution
{
	public static void main(String args[]) throws Exception
	{
		Scanner sc = new Scanner(System.in);
		int T;
		T=sc.nextInt();

        for(int test_case = 1; test_case <= T; test_case++)
		{
            int total = 0;
            for(int i = 0; i < 10; i++)
            {
                int tmp = sc.nextInt();
                total += tmp;
            }
            System.out.println("#"+ test_case + " " + Math.round(total / 10.0));
		}
	}
}