#include<iostream>
using namespace std;

class Area{
    public:
    double rectangle(double length, double width){
        return length * width;
    }
    double square(double side){
        return side * side;
    }
};
int main(){
    Area myArea;
    double rectangleArea = myArea.rectangle(5.0, 3.0);
    cout<<"Area of Rectangle: "<<rectangleArea<<endl;

    double squareArea = myArea.square(4.0);
    cout<<"Area of Square: "<<squareArea<<endl;
}