/*
on the name of god
author: Parag Jain
problem 6:
The sum of the squares of the first ten natural numbers is,12+22+...+102=385
The square of the sum of the first ten natural numbers is,(1+2+...+10)2=552=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
Date: 5/3/2020
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
  int n=100; //input
  int sum_of_sqr;
  int sqr_of_sum;
  int difference;
  //finding sum of squre on n natural no using s=n(n+1)(2n+1)/6
  sum_of_sqr=(n*(n+1)*((2*n)+1))/6;
  //finding sum of n natural no using n(n+1)/2
  sqr_of_sum=((n*(n+1))/2)*((n*(n+1))/2);
  //finding diffrence in both
  difference=sqr_of_sum-sum_of_sqr;
  cout<<difference; //output
  return 0; 
}