#include<iostream>
using namespace std;
int fiboncci(int n){
    int i = 2;
    for (int i = 2; i <= n; i++)
    {
     
        i = (i-1) + (i-2);  
    }
 return i;

}

int main(){
    int n;
    cout<<"Enter the no"<< "  " ;

    cin>>n;

    cout<<"nth fibonacci no is  "<< fiboncci(n);
}
