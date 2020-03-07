/*
on the name of god
author: Parag Jain
problem 10:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.Find the sum of all the primes below two million.
Date: 7/3/2020
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int checkprime(int n)
{   
    if(n%2==0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i = i+2) 
	{
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1; 
}

int main()
{
long long sum=2;
for(int i=3;i<=2000000;i++)
{
    if(checkprime(i)==1)
    {
        sum=sum+i;
    }
}
  cout<<sum;  
  return 0; 
}