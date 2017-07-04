#include <iostream>
using namespace std;

int main() {
	int num, x; // num = the number to find the prime factorization of, x = the number to test to see if it is a factor
	bool is_first = true; // keep track of when to print commas
	
	cout << "Enter a number to find its prime factorization: ";
	cin >> num;
	
	if (num < 2) {
		cout << "The prime factorization of this number cannot be found. Please enter a number that is greater than or equal to 2." << endl;
		return 0;
	}
	
	x = 2;
	cout << "The prime factorization of " << num << " is: ";
	while (x <= num) {
		if (num % x == 0) { // num is divisible by x
			if (is_first == false) {
				cout << ", ";
			}
			else {
				is_first = false;
			}
			
			cout << x;
			num /= x;
		}
		else {
			x++;
		}
	}
	
	return 0;
}