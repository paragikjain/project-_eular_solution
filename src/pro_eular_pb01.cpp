/*
on the name of god
author: Parag Jain
problem 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
           Find the sum of all the multiples of 3 or 5 below 1000.
Date 3/3/2020
*/
#include <iostream>

using namespace std;

int main()
{
    int n=1000; //input 
    int sum=0;
    //finding multipal of 3
    for(int i=3;i<n;i=i+3)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    //finding multipal of 5
    for(int i=5;i<n;i=i+5)
    {
        if(i%3==0)
        {
            continue;
        }
        else if(i%5==0)
        {
            sum=sum+i;
        }
    }

    cout<<sum;
    return 0;
}