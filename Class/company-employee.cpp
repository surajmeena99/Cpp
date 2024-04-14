#include<iostream>
using namespace std;

class Company{
    public:   //access modifiers
    string name;
    int netWorth;    //Data member
    string location;

    //method
    void inputData(){      //Member Function
        cout<<"Enter Company name:"<<endl;
        cin>>name;
        cout<<"Enter Company networth:"<<endl;
        cin>>netWorth;
        cout<<"Enter Company location:"<<endl;
        cin>>location;
    }
    void displayData(){
        cout<<"Company data"<<endl;
        cout<<"Company name:"<<name<<endl;
        cout<<"Company networth:"<<netWorth<<endl;
        cout<<"Company location:"<<location<<endl;
    }
};
class Employee{
    public:
    int id;
    string name;
    string department;
    int salary;

    void inputData(){
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter department:"<<endl;
        cin>>department;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void displayData(){
        cout<<"Employee data"<<endl;
        cout<<"Employee ID:"<<id<<endl;
        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee Department:"<<department<<endl;
        cout<<"Employee salary:"<<salary<<endl;

    }
};
main(){
    Company c1;
    Employee e1;

    c1.inputData();
    c1.displayData();
    
    e1.inputData();
    e1.displayData();

}