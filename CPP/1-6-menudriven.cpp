#include <iostream>
using namespace std;

int main() {
    int choice,a,b;
    do {
        cout<<"\n----- MENU -----\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Sum = "<<a+b<<endl;
                break;
            case 2:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Difference = "<<a-b<<endl;
                break;
            case 3:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Product = "<<a*b<<endl;
                break;
            case 4:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                if(b!=0)
                    cout<<"Quotient = "<<a/b<<endl;
                else
                    cout<<"Division by zero not allowed\n";
                break;
            case 5:
                cout<<"Exiting program.\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    } while(choice!=5);

}