import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);
        printResult(arr);

    }

    private static void printResult(int[] arr) {
        System.out.println(getAvg(arr));
        System.out.println(getMid(arr));
        System.out.println(getMode(arr));
        System.out.println(getRange(arr));
    }

    private static int getAvg(int[] arr) {
        double sum = 0;
        for (int i : arr) {
            sum += i;
        }
        return (int) Math.round(sum / arr.length);
    }

    private static int getMid(int[] arr) {
        return arr[arr.length / 2];
    }

    private static int getMode(int[] arr) {
        Map<Integer, Integer> modeMap = new HashMap<>();
        for (int i : arr) {
            modeMap.put(i, modeMap.getOrDefault(i, 0) + 1);
        }

        int maxModeNum = Collections.max(modeMap.values());

        List<Integer> candidateModeNum = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : modeMap.entrySet()) {
            if (entry.getValue() == maxModeNum) {
                candidateModeNum.add(entry.getKey());
            }
        }

        Collections.sort(candidateModeNum);

        if (candidateModeNum.size() > 1) {
            return candidateModeNum.get(1);
        }

        return candidateModeNum.get(0);
    }

    private static int getRange(int[] arr) {
        int min = arr[0];
        int max = arr[arr.length - 1];

        return max - min;
    }
}