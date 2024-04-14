#include<iostream>
using namespace std;

class Student{
    public:   //access modifiers
    int id;    //Data member(variables)
    string name;
    string subject;

    //method
    void inputData(){      //Member Function(methods)
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter subject:"<<endl;
        cin>>subject;
    }
    void displayData(){
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Subject:"<<subject;
    }
};
main(){
    Student obj;
    obj.inputData();
    obj.displayData();

}