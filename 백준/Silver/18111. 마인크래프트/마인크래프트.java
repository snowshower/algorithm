import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    private static final int MAX_HEIGHT = 257;
    private static final int MIN_HEIGHT = 0;
    private static final int MAX_INVENTORY = 64000000;
    private static final int MIN_INVENTORY = 0;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());

        int[][] ground = new int[N][M];

        int minTime = Integer.MAX_VALUE;
        int maxHeight = 0;

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                ground[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int k = MIN_HEIGHT; k < MAX_HEIGHT; k++) {
            int currentTime = 0;
            int inventory = B;
            if (inventory < MIN_INVENTORY || inventory > MAX_INVENTORY) {
                continue;
            }
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (ground[i][j] < k) {
                        currentTime += fill(ground[i][j], k);
                        inventory -= (k - ground[i][j]);
                    } else if (ground[i][j] > k) {
                        currentTime += mine(ground[i][j], k);
                        inventory += (ground[i][j] - k);
                    }
                }

            }
            if (inventory >= MIN_INVENTORY && inventory < MAX_INVENTORY) {
                if (currentTime <= minTime) {
                    minTime = currentTime;
                    maxHeight = k;
                }
            }
        }

        System.out.println(minTime + " " + maxHeight);

    }

    private static int mine(int ground, int target) {
        int mine = 2;
        return (ground - target) * mine;
    }

    private static int fill(int ground, int target) {
        int fill = 1;
        return (target - ground) * fill;
    }
}