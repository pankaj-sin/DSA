#include<iostream>
using namespace std;
int main(){
    
    int prod = 1;
        int sum = 0;

cout<<"Enter the number";
int n;
cin>>n;
        while (n!= 0)
        {
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;
            n = n/10;
        }
        int ans = prod - sum;
        cout<<ans;
    }
      