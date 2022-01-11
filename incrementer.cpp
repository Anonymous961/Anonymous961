#include<iostream>
using namespace std;
int main(){
//     int i=1;
//       //1     //3
//     i=i++ + ++i;
//     cout<<i<<endl;
//     return 0;
//
       int i=1;
       int j=2;
       int k;
       k=i  +   j  + i++  +  j++ + ++i  + ++j;
       cout<<i<<' '<<j<<' '<<k<<endl;
}
