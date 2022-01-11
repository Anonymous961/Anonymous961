#include<iostream>
using namespace std;
int fact(int n){
    int s=1;
    for (int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int ncr(int n,int r){
    int s;
    s=fact(n)/(fact(n-r)*fact(r));
    return s;
}
int main(){
    int n;
    cout<<"enter your no. :";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}