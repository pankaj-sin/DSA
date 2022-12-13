#include<iostream>
using namespace std;
int main(){
    char a ;
    cout<< "Enter the input" <<endl;
    cin>>a;
    if (a >= 97 && a <= 122)
    {
        cout<<"The char is in Lower Case" <<endl;/* code */
    }
    else if (a >= 65 && a <= 90)
    {
        cout<<"The char is in uppercase" << endl;/* code */
    }
    else{
        cout<< "These are number" << endl;
    }
    
    
}