#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    string subject;

    void setID(int id){
        this->id = id;
    }
    int getID(){
        return this->id;
    }

    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }

    void setSubject(string subject){
        this->subject = subject;
    }
    string getSubject(){
        return this->subject;
    }
};
main(){
    //object creation
    Student s1;

    s1.setID(10);
    cout<<s1.getID();

    s1.setName("\nSuraj");
    cout<<s1.getName();

    s1.setSubject("\nMath");
    cout<<s1.getSubject();
}
