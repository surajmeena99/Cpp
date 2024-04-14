#include<iostream>
using namespace std;

class sum{
    private:
    int x,y,z;  //Private data members

    public:
    void add(){  //method
        cout<<"Enter two number:";
        cin>>x>>y;  //excess private variables in the class
        z=x+y;
        cout<<"sum = "<<z;
    }
};
main(){
    sum sm;
    sm.add(); //only method call in the 'main()' because only 'add()' method is public.
}