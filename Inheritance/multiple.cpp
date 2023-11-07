#include<iostream>
using namespace std;

class papa{
    public:
    void house(){
        cout<<"4 BHK House";
    }
};
class kaka{
    public: 
    void shop(){
        cout<<"\nKirana shop";
    }
};
class son: public papa, public kaka{
    public:
    void car(){
        cout<<"\nAudi Car";
    }
};
main(){
    son obj;
    obj.house();
    obj.shop();
    obj.car();
}