import java.util.Scanner;
import java.util.stream.Stream;

class Solution{
    public static void main(String args[]) throws Exception{
        Scanner sc = new Scanner(System.in);
        String num = sc.nextLine();
        int sum = Stream.of(num.split("")).mapToInt(Integer::parseInt).sum();
        System.out.println(sum);
    }
}