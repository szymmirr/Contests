import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class speedm {
    public static void main(String[] args) throws IOException {
        BufferedReader s = new BufferedReader(new InputStreamReader(System.in));
        int tests = Integer.parseInt(s.readLine());
        for (int i = 0; i < tests; i++) {
            int measurements = Integer.parseInt(s.readLine());
            int[] speed = new int[measurements];
            for (int j = 0; j < measurements; j++) {
                speed[j] = Integer.parseInt(s.readLine());
            }
            int sum, min = 10001, max = -10001;
            for (int k = 0; k < Math.pow(2, measurements - 1); k++) {
                sum = speed[0];
                String operations = Integer.toBinaryString(k);
                for (int j = operations.length(); j < measurements - 1; j++) {
                    operations = "0" + operations;
                }
                for (int j = 0; j < measurements - 1; j++) {
                    if (operations.charAt(j) == '1') {
                        sum += speed[j + 1];
                    } else {
                        sum -= speed[j + 1];
                    }
                }
                if (Math.abs(sum) > max) {
                    max = Math.abs(sum);
                }
                if (Math.abs(sum) < min) {
                    min = Math.abs(sum);
                }
            }
            System.out.print(min + " " + max + "\n");
        }
    }
}
