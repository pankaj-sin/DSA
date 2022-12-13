#include<iostream>
using namespace std;

int pow( int p, int b)
{
    int ans = 1;

    for (int i = 0; i < p; i++)
    {
       ans = ans * b; /* code */
    }
    
    return ans;

}

int main(){

int b , p ;
cout<<"Enter the base" <<endl;
cin>>b;
cout<<"Enter the power" <<endl;
cin>>p;
cout<<pow(p , b) << "This is value of power";
}