/*
on the name of god
author: Parag Jain
problem 4:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers. 

Date: 4/3/2020
*/
#include <iostream>
#include <math.h>

using namespace std;

//this function will check wether no is pailendrom or not if pailendrom then return same no otherwise returns -1 
int checkpailndrom(int n)
{ 
  int rem,div=n;
  int ans=0;
 while(div>0)
 {
   rem=div%10;
   div=div/10;
   ans=ans*10+rem;  
 }
 if(ans==n)
 {
     return n;
 }
 else
 {
     return -1;
 }
}
int main()
{
 int upperlimit=999,lowerlimit=100; //inputs
 int largestno=0,check=0;
 for(int i=upperlimit;i>=lowerlimit;i--)
 {
     for(int j=i;j>=lowerlimit;j--)
     {
        check=checkpailndrom(i*j);
        if(check>largestno)
        {
            largestno=check;
        }
     }
 }
 cout<<largestno; //output
 return 0; 
}