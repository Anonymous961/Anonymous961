#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int o=n;
    while(n>0){
        int l=n%10;
        s+=pow(l,3);
        //cout<<s<<" "<<l<<endl;
        n=n/10;
    }
    if (s==o){
        cout<<"armstrong"<<endl;
    }else{
        cout<<"not armstrong"<<endl;
    }
    //cout<<s;
    return 0;
}