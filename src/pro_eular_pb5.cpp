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
#include <algorithm>


using namespace std;

int main()
{
 int n=20; //input
 int ans=2;
 int temp=1;
 vector<int> list_used;
 list_used.push_back(2);
 for(int i=3;i<=n;i++)
 {    temp=i;
     for(vector<int>::iterator it=list_used.begin();it!=list_used.end();it++)
     {
         if(temp%*it==0)
         {
            temp=temp/(*it);
         }
     }
     list_used.push_back(temp);
     ans=ans*temp;
     cout<<"ans "<<temp<<endl;
 }
  
 cout<<ans; //output
 return 0; 
}