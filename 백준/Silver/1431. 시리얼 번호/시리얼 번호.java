import java.util.*;

//A와 B의 길이가 다르면, 짧은 것이 먼저 온다.
//만약 서로 길이가 같다면, A의 모든 자리수의 합과 B의 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저온다. (숫자인 것만 더한다)
//만약 1,2번 둘 조건으로도 비교할 수 없으면, 사전순으로 비교한다. 숫자가 알파벳보다 사전순으로 작다.


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] arr = new String[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.next();
        }

        Arrays.sort(arr, (s1, s2) -> {

            if (s1.length() != s2.length()) return s1.length() - s2.length();

            int sum1 = getSum(s1);
            int sum2 = getSum(s2);
            if (sum1 != sum2) return sum1 - sum2;

            return s1.compareTo(s2);
        });

        for (String s : arr) {
            System.out.println(s);
        }
    }

    private static int getSum(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (Character.isDigit(ch)) {
                sum += ch - '0';
            }
        }
        return sum;
    }
}