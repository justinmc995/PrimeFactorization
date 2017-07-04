import java.util.Scanner;

public class PrimeFactorization {
	public static void main(String[] args) {
		int num, x; // num = the number to find the prime factorization of, x = the number to test to see if it is a factor
		boolean is_first = true; // keep track of when to print commas
		Scanner in = new Scanner(System.in); 
	
		System.out.print("Enter a number to find its prime factorization: ");
		num = in.nextInt();
	
		if (num < 2) {
			System.out.println("The prime factorization of this number cannot be found. Please enter a number that is greater than or equal to 2.");
			System.exit(0);
		}
	
		x = 2;
		System.out.print("The prime factorization of " + num + " is: ");
		while (x <= num) {
			if (num % x == 0) { // num is divisible by x
				if (is_first == false) {
					System.out.print(", ");
				}
				else {
					is_first = false;
				}
			
				System.out.print(x);
				num /= x;
			}
			else {
				x++;
			}
		}
	}
}