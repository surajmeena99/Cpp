#include<iostream>
using namespace std;

//when one class having same method name but different parameters 
class OverloadingDemo{
    public:
    int a,b;
    void add(int a, int b){
        cout<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    void add(float a, float b){
        cout<<a+b;
    }
};
main(){
    OverloadingDemo old;
    old.add(56, 12);
    old.add(56,12,34);
    old.add(24.13f,54.5f);
}