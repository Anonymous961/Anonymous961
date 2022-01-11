#include<climits>
#include<iostream>
using namespace std;
int main(){
    // cout<<"enter size :";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(arr[i],mx);
    }
    cout<<mx;
    return 0;
}