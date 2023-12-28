import java.util.Scanner;

class Solution{
    public static void main(String args[]) throws Exception{
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for(int test_case = 1; test_case <= T; test_case++){
            int max = 0;
            for(int i = 0; i < 10; i++){
                int tmp = sc.nextInt();
                if(tmp > max)
                    max = tmp;
            }
            System.out.println("#" + test_case + " " + max);
        }
    }
}