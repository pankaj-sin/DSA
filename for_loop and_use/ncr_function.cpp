#include<iostream>
using namespace std;

int fact(int x){
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
      fac = fac * i;
       /* code */
    }

   return fac; 
}
int ncr( int n , int r){

int num = fact(n);
 int den = fact(r) * fact((n-r));

 return num/den;

}
int main(){
int n ,r;
    cout<<"Enter the number n and r ";
    cin>>n >>r;
    cout<<ncr( n , r) << "this is the value" ;
}