import java.util.Scanner;
import java.util.Arrays;
import java.util.stream.Stream;

class Solution{
    public static void main(String args[]) throws Exception{
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());	// sc.nextInt 로 받으면 line 에 개행문자가 들어가기 때문에 sc.nextLine으로 받음
        String line = sc.nextLine();		// 두번째 줄의 숫자를 한번에 입력받음
        int arr[] = Stream.of(line.split(" ")).mapToInt(Integer::parseInt).toArray();		// 숫자들 사이의 공백을 기준으로 나눠서 배열에 넣음
        Arrays.sort(arr);
        System.out.println(arr[(T-1)/2]);
    }
}