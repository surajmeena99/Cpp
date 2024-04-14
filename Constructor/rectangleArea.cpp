#include<iostream>
using namespace std;

class Rectangle{
    private:
    double length;
    double width;
    double area;

    public:
    Rectangle(double l, double w){   //Constructor
        length = l;
        width = w;
        area = length * width;
    } 
    
    void displayArea(){  //Function to display the area
        cout<<"Area of Rectangle: "<<area <<endl;
    }
};
int main(){
    double length, width;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    Rectangle myObj(length, width);
    myObj.displayArea();
    return 0;
}