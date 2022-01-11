#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for (j=1;j<=n;j++){
            cout<<" ";
        }
        int k=i;
        for (;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for (int j=n-i;j>=1;j--){
    //         cout<<" ";
    //     }
    //     for (int j=i;j>0;j--){
    //         cout<<j;
    //     }
    //     for (int j=1;j<=i;j++){
    //         if (j>1){
    //             cout<<j;
    //         }
            
    //     }
    //     cout<<endl;
    //}
    //return 0;
}