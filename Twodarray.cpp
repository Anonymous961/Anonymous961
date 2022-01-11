#include<iostream>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen(input.txt,'r',stdin);
    // freopen(output.txt,'w',stdout);
    // #endif
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // cout<<"Matrix is :\n";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x==a[i][j]){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element found";
    }else{
        cout<<"Element not fount";
    }
    return 0;
}