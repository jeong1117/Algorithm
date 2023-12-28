import java.util.Scanner;

class Solution
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        int T;
        T = sc.nextInt();
        
        for(int test_case = 1; test_case <= T; test_case++)
        {
            int tmp1 = sc.nextInt();
            int tmp2 = sc.nextInt();
            System.out.print("#" + test_case + " ");
            if(tmp1 > tmp2)
                System.out.println(">");
            else if(tmp1 < tmp2)
                System.out.println("<");
            else if(tmp1 == tmp2)
                System.out.println("=");
        }
    }
}