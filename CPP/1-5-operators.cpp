#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter 2 integrs: "<<endl;
    cin>>n1>>n2;
    cout<<"AND (n1 & n2) = "<<(n1 & n2)<<endl;
    cout<<"OR (n1 | n2) = "<<(n1|n2)<<endl;
    cout<<"XOR (n1 ^ n2) = "<<(n1^n2)<<endl;
    cout<<"Left Shift (n1 << 1) = "<<(n1<<1)<<endl;
    cout<<"Right Shift (n1 >> 1)="<<(n1>>1)<<endl;
}