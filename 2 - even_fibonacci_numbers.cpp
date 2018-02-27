/*
    @file       2-even_fibonacci_numbers.cpp
    @author     Tolby Lam
    @date       2/24/2018
    @version    1.0

    @brief      Find the sum of even valued Fibonacci numbers
				whose values do not exceed k.
                

    @TODO       -create fibonacci sequence
				-limit to values under k
				-further limit to even values
*/

#include <iostream>


int main() {
	int sum = 0;
	int a = 1; //first fibo number
	int b = 2; //second fibo number
	int c; //temp number
	int k = 4000000; //limit
	
	while(b < k) {
		if(b % 2 == 0) { //check if number is even
			sum = sum + b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	
	std::cout << "The sum is " << sum;
	return 1;
}
