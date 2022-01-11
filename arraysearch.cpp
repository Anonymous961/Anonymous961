#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"enter size : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key : "<<endl;
    cin>>key;
    if (linearsearch(arr,n,key)==-1){
        cout<<"no element found";
    }else{
        cout<<"index is :"<<linearsearch(arr,n,key);
    }
    cout<<arr[-1]<<endl;

    return 0;
}