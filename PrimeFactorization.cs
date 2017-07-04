using System;

public class PrimeFactorization {
	public static void Main() {
		int num, x; // num = the number to find the prime factorization of, x = the number to test to see if it is a factor
		bool is_first = true; // keep track of when to print commas
	
		Console.Write("Enter a number to find its prime factorization: ");
		num = Convert.ToInt32(Console.ReadLine());
	
		if (num < 2) {
			Console.WriteLine("The prime factorization of this number cannot be found. Please enter a number that is greater than or equal to 2.");
			return;
		}
	
		x = 2;
		Console.Write("The prime factorization of {0} is: ", num);
		while (x <= num) {
			if (num % x == 0) { // num is divisible by x
				if (is_first == false) {
					Console.Write(", ");
				}
				else {
					is_first = false;
				}
			
				Console.Write(x);
				num /= x;
			}
			else {
				x++;
			}
		}
	}
}