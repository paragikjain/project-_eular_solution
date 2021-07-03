  #define MAX_SIZE 1000
  #include <stdio.h>
  #include <iostream>
  
  using namespace std;
  int main(){
    int n =100;
    int a[MAX_SIZE] ;
    a[MAX_SIZE - 1] = 1;
    int top = MAX_SIZE -1;
    int carry = 0;
    while(n > 1){
      for( int i = MAX_SIZE -1 ; i >= top  ; i--){
        int tmp = (a[i] * n) +  carry;
        //cout<<tmp<<endl;
        if(tmp > 9)
        {
            
            a[i] = (tmp % 10);
            carry = tmp / 10;
        }
        else{
          a[i] = tmp;
          carry = 0;
        }
      }
      int rem = 0 ;
      while(carry > 0){
      	a[top-1] = carry %	10;
        carry = carry /10;
        top--;
      }
      n--;
    }
    int sum = 0;
    for( int i = top  ; i < MAX_SIZE  ; i++){
        sum += a[i];
        //printf("%d",a[i]);
    }
    cout<<sum;
    return 0;
  }
