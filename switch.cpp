#include<iostream>
using namespace std;
int main(){
    
    // for (int i=1;i=1;){
    //     char button;
    //     cout<<"input your character :";
    //     cin>>button;
    //     if (button=='a'){
    //         cout<<"hello"<<endl;
    //     }
    //     else if (button=='b'){
    //         cout<<"namaste"<<endl;
    //     }
    //     else if (button=='c'){
    //         cout<<"ciao"<<endl;
    //     }
    //     else if (button=='d'){
    //         cout<<"salut"<<endl;
    //     }
    //     else if (button=='e'){
    //         cout<<"hola"<<endl;
    //     }
    //     else {
    //         cout<<"Nothing here"<<endl;
    //         break;
    //     }
    //}
    char button;
    cout<<"input your character :";
    cin>>button;
    switch(button){
    case 'a':
    cout<<"hello"<<endl;
    break;
    case 'b':
    cout<<"namaste"<<endl;
    break;
    case 'c':
    cout<<"ciao"<<endl;
    break;
    case 'd':
    cout<<"salut"<<endl;
    break;
    case 'e':
    cout<<"hola"<<endl;
    break;
    default:
        cout<<"Nothing here"<<endl;
        break;
    }
    return 0;
}