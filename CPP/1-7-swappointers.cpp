#include<iostream>
using namespace std;
int swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    cout<<"enter 2 intgers"<<endl;
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After swapping:\n";
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
