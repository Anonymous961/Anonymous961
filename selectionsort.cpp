#include<iostream>
using namespace std;
int selsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    //cout<<"hello"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
int main(){
    int n;
    cout<<"enter size :";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    selsort(arr,n);
    return 0;
}