#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;

    public:
    Person(const string& _name) : name(_name){  //Constructor that takes a name parameter
        cout<<"Person objected created with name: "<<name<<endl;
    }

    void introduce(){
        cout<<"Hello, I'm "<<name<<"."<<endl;
    }
};
int main(){
    Person person1("Suraj"); //Create a Person object with a name
    person1.introduce();  //call the intriduce method to display the name
    return 0;
}