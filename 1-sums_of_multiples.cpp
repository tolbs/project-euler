/*
    @file       1-sums_of_multiples.cpp
    @author     Tolby Lam
    @date       2/24/2018
    @version    1.0

    @brief      If we list all the natural numbers below 10 
                that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
                The sum of these multiples is 23.
                Find the sum of all the multiples of 3 or 5 below 1000.
                
                Let A = {x: x = 3k for all x ∈ N}
                Let B = {x: x = 5k for all x ∈ N}
                The solution S is the union of the sets A and B minus their intersection

    @TODO       -solve the problem
                    -recursive solution
                    -iterative solution
                -find a general solution
                -provide mathematical proof
*/


#include <iostream>
using std::cin;
using std::cout;

//==function headers===========================================================

//--itr_sol()------------------------------------------------------------------
/*
    @brief  Returns an approximate solution z to the equation:
            x^(5.3) + (3.5)^x = 8379097

    @param  a   The first number to find multiples of.
    @param  b   The second number to find multiples of.
	@param	k	Multiples of a and b must be under this number.

    @return	The sum of all their multiples.
*/
int itr_sol(int a, int b, int n);


//==global variables===========================================================
int x, y, n;
int sum = 0;


//==main function==============================================================
int main() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter N: ";
    cin >> n;
    cout << "The sum of all multiples of " << x << " and " << y 
         << " under " << n << " is " << itr_sol(x, y, n);
    
    return 1;
}

int itr_sol(int a, int b, int k) {
    
    //add sums of multiples of a
    for(;a < k;a = a + x) {
        sum = sum + a;
    }
    
    //add sums of multiples of b
    for(;b < k; b = b + y) {
        sum = sum + b;
    }
    
    //subtract their intersection from the total sum
    for(int i = 0; i < k; i = i + 15) {
        sum = sum - i;
    }
    
    return sum;
}