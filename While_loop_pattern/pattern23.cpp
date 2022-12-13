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
        //printing the space
        int space = row - col;
        while (space)
        {
            cout<<" " ;
            space = space - 1 ;
        }
        
        int num = row;
         
        while (col <= n - row + 1)
        {
           
            cout<< num;
            num = num + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1 ;
    }
    


}