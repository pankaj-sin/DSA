#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter a number"<< endl;
    cin>>a;
    int sum = 0;
    int i = 1;
   
while (i<=a)
{
    if (i % 2 == 0)
    {
sum = sum + i;

    }
    
    
    i=i+1;
    
}

    cout<<" Sum is " <<sum <<endl;
    
    
}