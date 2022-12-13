#include<iostream>
using namespace std;
int pow(){
    int b , p , ans = 1;
    cout<<"Enter base and power"<< endl;
    cin>>b >>p;
    for (int i = 0; i < p; i++)
    {
      ans = ans * b;  /* code */
    }
    return ans;
}
int main(){
    cout<<pow()<< "This is calculated value ";
}