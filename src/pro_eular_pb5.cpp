/*
on the name of god
author: Parag Jain
problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Date: 4/3/2020
*/
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
 int n=10; //input
 int ans=1;
 int divby=0;
 vector<int> list_used;
 for(int i=2;i<=10;i++)
 {   int temp=i;
     for(int j=2;j<i;j++)
     {
         if(temp%j==0)
         { 
            cout<<"divby"<<temp<<endl;
            temp=temp/j;
            divby=temp;
         }
     }
     
    if(divby!=0)
    {   
        list_used.push_back(divby)
        ans=ans*divby;
        cout<<"divbyfinal"<<divby<<endl;
        divby=0;
    }
    else
    {
        cout<<i<<endl;
        divby=0;
        ans=ans*i;
    } 
     
 }
 cout<<ans; //output
 return 0; 
}