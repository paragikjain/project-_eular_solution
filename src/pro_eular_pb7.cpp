/*
on the name of god
author: Parag Jain
problem 7:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
Date: 5/3/2020
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
  int n=10001; //input
  int count =1;
  int i=3;
  int ans;
  while(count<n){
    if(checkprime(i)==1)
    {
        count=count+1;
        ans=i;
    }
    i++;
  }
  cout<<ans; //output
  return 0; 
}