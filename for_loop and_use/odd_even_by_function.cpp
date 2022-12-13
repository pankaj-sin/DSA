#include<iostream>
using namespace std ;
// 1 in case of even
//0 in case of odd
bool even_odd(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    if (n%2 == 0)
    {
        return 1;/* code */
    }
    else
    return 0;
    
}
int main(){
    bool ans = even_odd();
    if (ans == 1)
    {
        cout<<"Even"<<endl;/* code */
    }
    else
    cout<<"Odd"<<endl;
}