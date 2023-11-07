#include<iostream>
using namespace std;

class Parent{
    public:
    void parent(){
        cout<<"This is the Parent class"<<endl;
    }
};
class Child1 : public Parent{
    public:
    void child1(){
        cout<<"This is Child1, inheriting from Parent"<<endl;
    }
};
class Child2 : public Parent{
    public:
    void child2(){
        cout<<"This is Child2, also inheriting from Parent"<<endl;
    }
};
int main(){
    Child1 c1;
    c1.parent();
    c1.child1();

    Child2 c2;
    c2.parent();
    c2.child2();
    
    return 0;
}