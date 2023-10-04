//Constructor is a special method that will call automatically when we create object.
//class name and constructor name always be same.

#include<iostream>
using namespace std;

class Student{
    public:
    Student(){   //Default constructor
        cout<<"Welcome to the constructor\n";
    }
    Student(int a, int b){   //parameterized constructor
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

main(){
    //object creation
    Student s1=Student();
    Student s2=Student(10, 20);

    // Student student1(10, 20);
}