#include<iostream>
using namespace std;

//when parent class and child class having same method name
class Parent{
    public:
    void mobile(){
        cout<<"\n I have samsung galaxy device";
    }
};
class Child:public Parent{
    public:
    void mobile(){
        Parent::mobile();  //scope resolution operator(use only for run both mobile() methods)
        cout<<"\n I have samsung galaxy M31";
    }
};
main(){
    Child obj;
    obj.mobile();
}