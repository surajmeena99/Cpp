//Inheritance allows you to create a child class based on an parent class.
//It allows the child class to inherit the properties (data and functions) of the parent class.

#include<iostream>
using namespace std;

class Father{
    public:
    void house(){
        cout<<"3 BHK House";
    }
};
class Child : public Father{
    public:
    void car(){
        cout<<"Audi car";
    }
};
main(){
    Child obj;
    obj.house();  //Inherited from Father
    obj.car();
}