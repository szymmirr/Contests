import java.util.*;
import java.lang.*;
import java.io.*;

class bfn1
{
	static String reverse(String input) {
		byte[] strAsByteArray = input.getBytes();
        byte[] result = new byte[strAsByteArray.length];

        for (int i = 0; i < strAsByteArray.length; i++)
            result[i] = strAsByteArray[strAsByteArray.length - i - 1];

		return new String(result);
	}
	
	public static void main (String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(r.readLine());
        
		for (int j = 0; j < t; j++) {
			int number = Integer.parseInt(r.readLine());
			int iterations = 0, sum = number;
			Boolean notPalindrom = true;
			
			while (notPalindrom){
				String input = Integer.toString(number);
				String reversed = reverse(input);
	 
				if(input.equals(reversed)){
					notPalindrom = false;
					System.out.println(sum + " " + iterations);
					break;
				}

		        sum = number + Integer.parseInt(reversed);
		        iterations++;
				number = sum;
			}
		}
	}
}