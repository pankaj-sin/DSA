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
         char start = 'A' + row - col; //Type casting is done
        while (col <= n)
        {
           
            cout<< start <<" ";
            start = start + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1 ;
    }
    


}