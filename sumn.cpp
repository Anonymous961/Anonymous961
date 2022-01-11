#include<iostream>
using namespace std;
int sum(int n){
    int s=n*(n+1)/2;
    return s;
}
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    cout<<"sum is : "<<sum(n);
    return 0;
}