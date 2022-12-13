#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the name";
    cin>>n;
    int m = n;
    int mask = 0;
    if (n == 0)
    {
       cout<< 1; /*This  code for zero condition */
    }
    
    while (n!= 0)
    {
        mask = (mask << 1 ) | 1;/*This  code for left shifting and  or operation with mask   */
        n = n >> 1;
    }
    int ans = (~m) & mask;
    cout<< ans;
}