#include<iostream>
using namespace std;

// 1 for prime no , 0 for non prime no;

bool isPrime( int x){
    for (int i = 2; i < x; i++)
    {
       if (x%i == 0)
       {
        return 1;/* code */
       }
        /* code */
    }
    
    return 0;
}

int main(){
    int n;
    cout<<"enter  no";
    cin>>n;
    if (isPrime( n ))
    {
        cout<<"No is not  prime" << endl;/* code */
    }
    else
    cout<<"No is   prime" << endl;
    
}