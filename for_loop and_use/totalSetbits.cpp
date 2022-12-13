#include<iostream>
using namespace std;
int totalSetbits( int a , int b){
   int count = 0;
    while (a!=0)
    {
        if (a&1 || b&1 == 1)
        {
         count ++;   /* code */
        }
         a = a>>1;/* code */
    }    
 return count;   
}

int main(){
    int a , b;
    cout<<"Enter the no a and b";
    cin>>a >>b;
    cout<< "Total no of set bits =  " << totalSetbits(a , b);
}