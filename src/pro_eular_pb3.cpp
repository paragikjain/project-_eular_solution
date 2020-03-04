/*
on the name of god
author: Parag Jain
problem 3: 
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
Date: 3/3/2020
*/
#include <iostream>
#include <math.h>

using namespace std;

//function for finding prime no, retrun 1 when no is prime else returns 0

int main()
{
    long long int n=600851475143; //input
    int large_prime;
    
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
	{ 
		large_prime=2; 
		n = n/2; 
	} 
	
    // n must be odd at this point. So we can skip 
	// one element (Note i = i +2)

    for (int i = 3; i <= sqrt(n); i = i+2) 
	{ 
		// While i divides n, print i and divide n 
		while (n%i == 0) 
		{ 
			large_prime=i;
			n = n/i; 
		} 
	}
    // This condition is to handle the case when n 
	// is a prime number greater than 2
    if (n > 2) 
		large_prime= n;  
    
    cout<<large_prime; //output
    return 0;
}