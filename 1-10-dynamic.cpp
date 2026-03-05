#include<iostream>
using namespace std;
class DynamicArray{
    int *arr;
    int size;
    int cap;
public:
    DynamicArray(){
        cap=2;
        size=0;
        arr=new int[cap];
    }
    void insert(int value){
        if(size==cap){
            cap=cap*2;
            int *temp=new int[cap];
            for(int i=0;i<size;i++)
                temp[i]=arr[i];
            delete[] arr;
            arr=temp;
        }
        arr[size]=value;
        size++;
    }
    void display(){
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    DynamicArray d;
    d.insert(10);
    d.insert(20);
    d.insert(30);
    d.insert(40);
    d.insert(50);
    d.insert(60);
    cout<<"Array elements:\n";
    d.display();
}