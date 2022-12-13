#include<iostream>
using namespace std;
int main(){
    int b , p;
    cout<< "Enter the base" <<endl ;
    cin>>b;
    cout<< "Enter the power" <<endl ;
    cin>>p;
    int ans = 1;
for (int i = 1; i <= p; i++)
{
   ans = ans*b; /* code */
}
cout<<ans;
}