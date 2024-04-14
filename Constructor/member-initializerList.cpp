#include<iostream>
using namespace std;

class Point{
    public:
    int x;
    int y;

    Point(int initialX, int initialY) : x(initialX), y(initialY){
        //This constructor sets the initial values of x and y using the member initializer list.
    }

    void display(){
        cout<<"Coordinates point is: ("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    Point myP(3,5);  //create an instance(object) of Pint with initial values
    myP.display();

    return 0;
}