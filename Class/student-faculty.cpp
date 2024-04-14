#include<iostream>
using namespace std;

class Student{
    public:   //access modifiers
    int id;    //Data member
    string name;
    string subject;

    //method
    void inputData(){      //Member Function
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter subject:"<<endl;
        cin>>subject;
    }
    void displayData(){
        cout<<"Student data"<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Subject:"<<subject<<endl;
    }
};
class Faculty{
    public:
    int id;
    string name;
    string department;

    void inputData(){
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter department:"<<endl;
        cin>>department;
    }
    void displayData(){
        cout<<"Faculty data"<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<department;
    }
};
main(){
    Student s1;
    Faculty f1;

    s1.inputData();
    s1.displayData();
    
    f1.inputData();
    f1.displayData();

}