#include<iostream>
using namespace std;
 
 int nthTerm( int a , int cd , int n){
    a = a + (n-1) *cd ;
    return a;

 }
 int main(){
    int a , cd , n;
    cout<<"Enter the first term ,common difference"<<endl;
   
    cin>>a ;
     cout<<"common difference"<<endl;
    cin>>cd  ;
    for (int i = 1; i <= 30; i++)
    {
   cout<<nthTerm(a , cd , i) <<"  " ;   /* code */
    }
    cout<<"Enter the term which you want to print"<<endl;
cin>>n;
cout<<"nth term is "<<" "<<nthTerm(a , cd , n);

 }