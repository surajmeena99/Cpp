#include<iostream>
using namespace std;

class Grandfather{
    public:
    void land(){
        cout<<"50 Acres of Land";
    }
};

class Father : public Grandfather{
    public:
    void house(){
        cout<<"\n5 BHK House";
    }
};

class Son : public Father{
    public:
    void car(){
        cout<<"\nMercedez car";
    }
};

main(){
    Son obj;
    obj.land();
    obj.house();
    obj.car();
}