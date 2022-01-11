#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int c=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(mx<arr[i] && arr[i]>arr[i+1]){
            c++;
        }
        mx=max(arr[i],mx);
    }
    cout<<c<<endl;
    return 0;
}