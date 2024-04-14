#include<iostream>
using namespace std;

class A{
    private:
    int x,y;

    public:
    friend void fun();
};
void fun(){  //it has access to the private members of the A class
    A obj;
    obj.x=10;
    obj.y=20;

    cout<<"x: "<<obj.x<<endl;
    cout<<"y: "<<obj.y;
}
main(){
    fun();
}

/*  ---------------  Method-2  -----------------------------------*/

// #include<iostream>
// using namespace std;

// class A{
//     private:
//     int x,y;

//     public:
//     friend void fun(A obj);
// };
// void fun( A obj){  //it has access to the private members of the A class
    
//     obj.x=10;
//     obj.y=20;

//     cout<<"x: "<<obj.x<<endl;
//     cout<<"y: "<<obj.y;
// }
// main(){
//     A obj;
//     fun(obj);
// }