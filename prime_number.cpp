#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number" <<endl;
    cin>>n;
    int i = 2;
    while (i<n)
    {
        if (n%i==0)
        {
          cout<<"Number is not Prime "<< i <<endl;
        }
        else{
            cout<<"The number is not prime " << i<< endl;
        }
        
i = i + 1;
    }
    return 0;
}