#include <stdio.h>

int main() {
	int num, x; /* num = the number to find the prime factorization of, x = the number to test to see if it is a factor */
	int is_first = 1; /* keep track of when to print commas */
	
	printf("Enter a number to find its prime factorization: ");
	scanf("%d", &num);
	
	if (num < 2) {
		printf("The prime factorization of this number cannot be found. Please enter a number that is greater than or equal to 2.\n");
		return 0;
	}
	
	x = 2;
	printf("The prime factorization of %d is: ", num);
	while (x <= num) {
		if (num % x == 0) { /* num is divisible by x */
			if (is_first == 0) {
				printf(", ");
			}
			else {
				is_first = 0;
			}
			
			printf("%d", x);
			num = num / x;
		}
		else {
			x = x + 1;
		}
	}
	
	return 0;
}