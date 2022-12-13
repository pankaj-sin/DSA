#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A'+ (n-1) - row + col;//Type casting is done
            cout<< ch <<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1 ;
    }
    


}