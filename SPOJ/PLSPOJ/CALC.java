import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Calc {

    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String s;
        while ((s = r.readLine()) != null) {
            int total = 0, firstNumber = 0, secondNumber = 0;
            String[] splited = s.split("\\s+");

            firstNumber = Integer.parseInt(splited[1]);
            secondNumber = Integer.parseInt(splited[2]);

            switch (splited[0].charAt(0)) {
                case '+':
                    total = firstNumber + secondNumber;
                    break;

                case '-':
                    total = firstNumber - secondNumber;
                    break;

                case '*':
                    total = firstNumber * secondNumber;
                    break;

                case '/':
                    total = firstNumber / secondNumber;
                    break;

                case '%':
                    total = firstNumber % secondNumber;
                    break;
            }
            System.out.print(total + "\n");
        }
    }
}
