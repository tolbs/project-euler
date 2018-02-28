/*
    @file       3 - largest_prime_factor.cpp
    @author     Tolby Lam
    @date       2/25/2018
    @version    1.0

    @brief      The prime factors of 13195 are 5, 7, 13 and 29.
				What is the largest prime factor of the number 600851475143?

    @TODO       -task
*/


#include <iostream>
using std::cin;
using std::cout;

//==function headers===========================================================
int largest_prime_factor(int n);


//==main function==============================================================
int main() {
	int input;
	
	cout << "Enter a number: ";
	cin >> input;
	
	cout << "The largest prime factor of " << input << " = "
	     << largest_prime_factor(input);
		 
	return 0;
}

int largest_prime_factor(int n) {
	int largest = 1;
	
	for(int i = 1; i <= n; i++) {
		if(n % i) {
			largest = i;
			n = n / i;
		}
	}
	
	return largest;
}