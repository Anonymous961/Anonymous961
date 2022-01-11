#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no. :";
    cin>>n;
    cout<<"factorial is :";
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    cout<<s;
    return 0;
}