#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no"<< endl;
    cin>>n;
    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
           ans = ans + pow(2,i);
            /* here we take only those 2 power value which digit is 1 and ignore 0 value */
        }
       n = n/10;
       i++;
        
    }
    
    cout<<"Decimal of the number is " << ans ;
}