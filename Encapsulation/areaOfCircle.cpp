/* Encapsulation is a process of wrapping(bundling) the data(variables) and methods(functions)
in a single entity (class). */
//It provides security to the data.
//It helps keep your data safe and organized.

#include<iostream>
using namespace std;

class Circle{
    private:
    double radius;  //Private data member

    public:
    //public methods to set and get the radius
    void setRadius(double r){
        if(r>=0){
            radius=r;
        }else{
            cout<<"Invalid radius input."<<endl;
        }
    }
    double getRadius(){
        return radius;
    }

    //public method to calculate the area of circle
    double calcArea(){
        return 3.14 * radius * radius;
    }
};
int main(){
    Circle myCircle;
    myCircle.setRadius(5.0);  //Setting the radious using the public method
    cout<<"Radius: "<<myCircle.getRadius()<<endl;  //Getting the radius using the public method
    cout<<"Area: "<<myCircle.calcArea()<<endl;  //Calculating and displaying the area
    return 0;
}