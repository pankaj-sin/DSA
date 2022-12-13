#include<iostream>
using namespace std;
void sumEle( int num[], int n)
{
    int sum = 0;
for (int i = 0; i < n; i++)
{
     sum = sum + num[i] ;
}
cout<<"Sum of num"<<" "<<sum;
}

int main(){
    int n;
    cout<<"Enter the number to add";
     cin>>n;

int arr[100];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; /* code */
    }
    
   
    sumEle( arr , n);
}