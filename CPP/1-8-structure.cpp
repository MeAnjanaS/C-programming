#include<iostream>
using namespace std;
struct Customer{
    int custid;
    string name;
    string phone;
};
struct Order{
    int orderid;
    string product;
    float price;
    Customer cust;
};
int main(){
    Order o;
    cout<<"Enter Order ID:";
    cin>>o.orderid;
    cout<<"Enter Product Name:";
    cin>>o.product;
    cout<<"Enter Product Price:";
    cin>>o.price;
    cout<<"Enter Customer ID:";
    cin>>o.cust.custid;
    cout<<"Enter Customer Name:";
    cin>>o.cust.name;
    cout<<"Enter Customer Phone:";
    cin>>o.cust.phone;
    cout<<"\n---Order Details---\n";
    cout<<"Order ID:"<<o.orderid<<endl;
    cout<<"Product:"<<o.product<<endl;
    cout<<"Price:"<<o.price<<endl;
    cout<<"\n---Customer Details---\n";
    cout<<"Customer ID:"<<o.cust.custid<<endl;
    cout<<"Customer Name:"<<o.cust.name<<endl;
    cout<<"Customer Phone:"<<o.cust.phone<<endl;
}