#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    bool ispalindrome=true;
    for(int i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            ispalindrome=false;
            break;
        }
    }
    if(ispalindrome){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
}