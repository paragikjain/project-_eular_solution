/*
on the name of god
author: Parag Jain
problem 9:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,a2 + b2 = c2, For example, 
squre(3) + squre(4) = 9 + 16 = 25 = squre(5).There exists exactly one Pythagorean triplet for which a + b + c = 1000.Find the product abc.
Date: 6/3/2020
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
for(long long a=1;a<998;a++)
{
    for(long long b=998;b>=1;b--)
    {  long long c=1000-(a+b);
       if((a*a)+(b*b)==(c*c))
       {
           cout<<a<<"+"<<b<<"+"<<c;
           cout<<a*b*c; //output
           return 0;
       } 
       
    }
}

  return 0; 
}