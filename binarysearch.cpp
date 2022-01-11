#include<iostream>
using namespace std;
int binarysearch(int n,int arr[],int key){
    int s=0;
    int e=n;
    if (key<arr[n-1] && key>arr[0]){
        while(s<=e){
            int mid=(s+e)/2;
            if (arr[mid]==key){
                return mid;
            }else if(arr[mid]<key){
                s=mid;
            }else{
                e=mid;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cout<<"enter a number to search :";
    cin>>a;
    if (binarysearch(n,arr,a)==-1){
        cout<<"no element found!!";
    }else{
        cout<<binarysearch(n,arr,a)<<endl;
    } 
    return 0;
}