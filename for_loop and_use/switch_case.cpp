#include<iostream>

using namespace std;
int main(){
int a , b;
cout<<"enter no a";
cin>>a;
cout<<"entr the no b";
cin>>b;
char op;
cout<<"enter operation";
cin>>op;
switch( op ){
case '+':
    cout<< "addition is " << (a+b) <<endl; 
    break;
case '-':
cout<<"Sub is" << (a-b) <<endl;
break;
case '*':
cout<< "Multiplication is " << (a*b) <<endl;
    break;
    case '/':
    cout<< "Dvision is " << (a/b) << endl;
    break;   
default:
cout<<"Please enter valid operation";
    }
}