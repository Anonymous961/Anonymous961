#include<iostream>
#include<climits>
using namespace std;
int main(){
    //int array[4]={10,20,30,40};
    //cout<<array[3]<<endl;
    int n;
    cin>>n;
    int array[n];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for (int i=0;i<n;i++){
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<"max "<<maxno<<endl;
    cout<<"min "<<minno<<endl;
    return 0;
    
    return 0;
}