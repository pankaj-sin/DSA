#include<iostream>
using namespace std;

int getMax(int num[] , int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      if (num[i] > max)
      {
        max = num[i]; /* code */
      }
        /* code */
    }
    return max;
}

int getMin(int num[] , int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      if (num[i] < min)
      {
        min = num[i]; /* code */
      }
        /* code */
    }
    return min;
}

int main(){
    int size ;
    cout<<"Enter the size";
    cin>>size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i]; 
    }
    cout<<"Max value is "<< getMax(num , size)<<endl;
    cout<<"Min value is "<< getMin(num , size)<<endl;
}