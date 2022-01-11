#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter your number :"<<endl;
    cin>>n;
    int c=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            c+=1;
        }
    }
    if (c>0){
        cout<<"number is composite"<<endl;
    }else{
        cout<<"number is prime"<<endl;
    }
    return 0;
}