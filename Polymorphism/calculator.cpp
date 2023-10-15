#include<iostream>
using namespace std;

class Calculator {
    public:
    int calc(int num1, int num2){
        return num1 + num2;
    }
    int calc(int num1, int num2, string operation){
        if(operation == "subtract"){
            return num1 - num2;
        }else{
            return num1 + num2;
        }
    }
    int calc(int num1, int num2, string operation, bool isMultiplication){
        if(isMultiplication){
            return num1 * num2;
        }else{
            return num1 + num2;
        }
    }
};
int main(){
    Calculator myObj;
    int result1 = myObj.calc(5,3);
    cout<<"Addition Result: "<<result1<<endl;
    int result2 = myObj.calc(5,3, "subtract");
    cout<<"Subtraction Result: "<<result2<<endl;
    int result3 = myObj.calc(5,3, "multiply", true);
    cout<<"Multiplication Result: "<<result3<<endl;
    return 0;
}