#include<iostream>
using namespace std;
int main(){
    string s1="nincompoop";
    cout<<s1.find("com")<<endl;   //find
    s1.insert(2,"lol");            //insert
    cout<<s1<<endl;
    cout<<s1.size()<<endl;     //size or length
    for(int i=0;i<s1.length();i++){ //length
        cout<<s1[i]<<endl;
    }
    s1.append("check");              //append
    string s=s1.substr(6,4);      //substring
    cout<<s<<endl;
    s1.erase(3,2);              //erase
    cout<<s1<<endl;
    s1.clear();                //clear
    if(s1.empty()){            //empty
        cout<<"string is empty"<<endl;
    }
    s="786";
    int x=stoi(s);               //string to int
    cout<<x+2<<endl;
    int y=786;
    cout<<to_string(y)+"hello"<<endl;    //int to string 
    return 0;
}