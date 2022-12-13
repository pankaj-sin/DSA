#include<iostream>
using namespace std;
// 1 for even , 0 for odd
bool isEven(){
cout<<"Enter the no";
int n;
cin>>n;
if(n&1)  // and operation of any odd number is 0, So here we take and operation
{
    return 0; /* code */
}
return 1;
}
int main(){
if (isEven())
{
   cout<<"Number is Even" <<endl; /* code */
}
else
cout<<"No is odd";
}