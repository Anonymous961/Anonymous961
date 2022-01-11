//matrix search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0;int c=m;
    bool flag=false;
    while(r<n and c>=0 ){
        if(a[r][c]==target){
            flag=true;
        }
        if(a[r][c]<target){
            r++;
        }
        else{
            c--;
        }
    }
    if(flag){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
    return 0;
}