#include<iostream>
using namespace std;

// Function signature

void printCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
       cout<< i << endl;
    }
    
    
}

int main(){
    int n;
    cout<<"Enter the no for counting" <<endl;
    cin>> n;
    printCount( n );
}