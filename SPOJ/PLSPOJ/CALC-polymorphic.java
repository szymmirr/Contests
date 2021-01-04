import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

interface Calculation {
    int calculate(int firstNumber, int secondNumber);
}

class Add implements Calculation {
    public int calculate(int firstNumber, int secondNumber) {
        return firstNumber + secondNumber;
    }
}

class Subtract implements Calculation {
    public int calculate(int firstNumber, int secondNumber) {
        return firstNumber - secondNumber;
    }
}

class Multiply implements Calculation {
    public int calculate(int firstNumber, int secondNumber) {
        return firstNumber * secondNumber;
    }
}

class Divide implements Calculation {
    public int calculate(int firstNumber, int secondNumber) {
        return firstNumber / secondNumber;
    }
}

class Modulo implements Calculation {
    public int calculate(int firstNumber, int secondNumber) {
        return firstNumber % secondNumber;
    }
}

class Calc {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String s;
        while ((s = r.readLine()) != null) {
            String[] operation = s.split("\\s+");
            int total = 0, firstNumber = 0, secondNumber = 0;
            firstNumber = Integer.parseInt(operation[1]);
            secondNumber = Integer.parseInt(operation[2]);

            Map<String, Calculation> m = new HashMap<String, Calculation>();
            m.put("+", new Add());
            m.put("-", new Subtract());
            m.put("*", new Multiply());
            m.put("/", new Divide());
            m.put("%", new Modulo());
            
            System.out.print(m.get(operation[0]).calculate(firstNumber, secondNumber) + "\n");
        }
    }
}
