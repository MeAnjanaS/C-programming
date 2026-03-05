#include<iostream>
#include<string>
using namespace std;
// typedef struct{
//     int id;
//     string name;
//     float salary;
// }Employee;

struct Employee{
    int id;
    string name;
    float salary;
};
using emp = Employee;
int main(){
    Employee e;
    cout<<"Enter ID:";
    cin>>e.id;
    cout<<"Enter Name:";
    cin>>e.name;
    cout<<"Enter Salary:";
    cin>>e.salary;
    cout<<"\nEmployee Details\n";
    cout<<"ID:"<<e.id<<endl;
    cout<<"Name:"<<e.name<<endl;
    cout<<"Salary:"<<e.salary<<endl;
}