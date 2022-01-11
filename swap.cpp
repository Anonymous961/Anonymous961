#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"before swap, enter ";
    cin>>a>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"now a is : "<<a<<", b is : "<<b;
    return 0;
}