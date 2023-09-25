#include<iostream>
using namespace std;

class Student{
    public:   //access modifiers
    int age=30;    //Data member(variable)
    
};
main(){
    Student s1;  //object is the variable of class
    cout<<s1.age;
}