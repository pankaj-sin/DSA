#include<iostream>
using namespace std;
int main(){
    int n = 1330;
    cout<<"Enter the total amount";
    cin>>n;
    
    switch (n)
    {
    case n : 
       
        cout<< n/100 << "100 rupee notes" <<endl;
         n = n - (n/100)*100;
        
    case n : cout<< n/50 << "50 rupee notes" <<endl;
    
        n = n - (n/50)*50;

    case n : cout<< n/20 << "20 rupee notes" <<endl;
        
        n = n - (n/20)*20;

     case n : cout<< n/1 << "1 rupee notes" <<endl;
    
        break;
    
    default:  cout<<"No rupee combination is possible";

    }
}