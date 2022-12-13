#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int ans = 0, i = 0;
    cout<<"Enter the negative number"<<endl;
    cin>>n;
    
        n = -(n);
      
    
    while (n!= 0)
    {
      
      int bit = n&1;
      ans = (bit*pow(10 , i)) + ans;
      n = n>>1;

        /* code for binary conversion so take & with the given num*/
    }

    int newAns = ans;
    // for 2's compliment,we take 1'comliment first and add 1 to it;
    newAns = (~newAns);
    newAns = newAns + 1;
    cout<<newAns<<endl;
    
}
