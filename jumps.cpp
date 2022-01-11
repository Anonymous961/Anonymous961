#include<iostream>
using namespace std;
 int main(){
    int pocketmoney=3000;
    for (int d=1;d<=30;d++){
        if (d%2==0){
            continue;
        }
        if (pocketmoney==0){
            cout<<"no money"<<"day is "<<d<<endl;
            break;
        }
        cout<<"day is :"<<d<<" ";
        cout<<"go out today"<<endl;
        pocketmoney-=300;
    }
    return 0;
 }