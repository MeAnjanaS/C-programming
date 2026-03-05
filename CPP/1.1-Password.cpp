#include<iostream>
#include<string>
using namespace std;
int main(){
    string password;
    cout<<"enter password";
    cin>>password;
    if(password.size()>8){
        cout<<"Valid password"<<endl;
    }else{
        cout<<"Invalid password"<<endl;
    }
}