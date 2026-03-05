#include<iostream>
using namespace std;
// int factorial(int n){
//     if(n==0 || n==1)
//         return 1;
//     else
//         return n*factorial(n-1);
// }
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;

    cout<<"Factorial = "<<fact;

    // cout<<"Factorial = "<<factorial(n);
}