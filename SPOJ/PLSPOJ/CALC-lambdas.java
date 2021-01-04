import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

interface Calculation {
    int calculate(int a, int b);
}

class Calc {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String s;
        int firstNumber = 0, secondNumber = 0;
        HashMap<String, Calculation> m = new HashMap<String, Calculation>();
        
        m.put("+", (int a, int b) -> { return a + b; });
        m.put("-", (int a, int b) -> { return a - b; });
        m.put("*", (int a, int b) -> { return a * b; });
        m.put("/", (int a, int b) -> { return a / b; });
        m.put("%", (int a, int b) -> { return a % b; });
        
        while ((s = r.readLine()) != null) {
            String[] operation = s.split("\\s+");
            firstNumber = Integer.parseInt(operation[1]);
            secondNumber = Integer.parseInt(operation[2]);
            System.out.print(m.get(operation[0]).calculate(firstNumber, secondNumber) + "\n");
        }
    }
}
