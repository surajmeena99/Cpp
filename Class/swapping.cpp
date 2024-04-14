#include<iostream>
using namespace std;

class Swap{
    public:
    void swapNumbers(int &a, int &b){ //'&'symbol indicates that it's a reference, which means that any changes
        a= a+b;                       //made to 'a' inside the function will affect the original variable that
        b= a-b;                       //was passed when the function was called.
        a= a-b;
    }
};
int main(){
    int num1 = 10;
    int num2 = 20;

    Swap swapper;
    cout<<"Before swapping: num1 = "<<num1 <<", num2 = "<<num2 <<endl;
    swapper.swapNumbers(num1, num2);
    cout<<"After swapping: num1 = "<<num1 <<", num2 = "<<num2 <<endl;
    return 0;
}