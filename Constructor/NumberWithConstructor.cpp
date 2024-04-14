#include<iostream>
using namespace std;

class Number{
    private:
    int value;

    public:
    Number(int _value) : value(_value){  //Constructor that takes a number parameter
        cout<<"Number objected created with value: "<<value<<endl;
    }
    int getValue(){
        return value;
    }
    void display(){
        cout<<"The value is: "<<value<<endl;
    }
};
int main(){
    Number num1(42);  //creata a Number object with a specific value
    cout<<"Value from num1: "<<num1.getValue()<<endl;  //Display the value using getValue mehtod
    num1.display();  //Display the value using the display method
    return 0;
}
