#include<iostream>
using namespace std;

inline int cube(int x){
    int result = x*x*x;
}
int main(){
    int x=2;
    cout<<cube(x);
    return 0;
}