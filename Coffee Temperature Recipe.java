import java.util.*;
public class R {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int q = sc.nextInt();
        int[] d = new int[200002];
        for (int i = 0; i < n; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            d[l]++;
            d[r + 1]--;
        }
        for (int i = 1; i <= 200000; i++) {
            d[i] += d[i - 1];
        }
        int[] p = new int[200001];
        for (int i = 1; i <= 200000; i++) {
            p[i] = p[i - 1];
            if (d[i] >= k) {
                p[i]++;
            }
        }
        int[] ar = new int[q];
        for (int i = 0; i < q; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            ar[i] = p[b] - p[a - 1];
        }
        for (int i = 0; i < q; i++) {
            System.out.println(ar[i]);
        }
    }
}
