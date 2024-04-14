#include<iostream>
using namespace std;

class Calculator{
    public:
    Calculator(int a, int b){   //parameterized constructor
        cout<<"add = "<<a+b;
        cout<<"\nsub = "<<a-b;
        cout<<"\nmul = "<<a*b;
    }
};
main(){
    //object creation
    Calculator obj=Calculator(10, 20);
}