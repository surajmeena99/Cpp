//To specify the variables and parameters.

#include<iostream>
using namespace std;

class Demo{
    public:
    int a,b;
    void inputData(int a, int b){
        this->a = a;  //variable's a = parameter's a
        this->b = b;
    }
    void displayData(){
        cout<<"\n a = "<<a;
        cout<<"\n b = "<<b;
    }
};
main(){
    Demo data;
    data.inputData(10, 20);
    data.displayData();
}