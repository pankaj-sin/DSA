#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no"<< endl;
    cin>>n;
    int ans = 0;
    
    while (n!=0)
    {
        int digit = n % 10;
        
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10))
        {
           return 0; /* This code for Special case */
        }
        
        ans = (ans * 10 )+ digit;
       
        n = n/10;
        
    }
    
    cout<<"Reverse of the number is " << ans ;
}