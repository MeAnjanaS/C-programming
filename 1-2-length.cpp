#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int len;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    cout<<"length of the string :"<<len<<endl;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<"Upper case string is: "<<str<<endl;
}