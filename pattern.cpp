#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int i;
    for (i=0;i<row;i++){
        int j;
        for (j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;   
}