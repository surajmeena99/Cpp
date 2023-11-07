//Hybrid inheritance is a combination of multiple inheritance and hierarchical inheritance.

#include <iostream>
using namespace std;

class Grandparent {
public:
    void grandparentMethod() {
        cout << "This is the Grandparent class method" << endl;
    }
};

class Papa : public Grandparent {
public:
    void papaMethod() {
        cout << "This is the Papa class method" << endl;
    }
};

class Kaka : public Grandparent {
public:
    void kakaMethod() {
        cout << "This is the Kaka class method" << endl;
    }
};

class Son : public Papa, public Kaka {
public:
    void sonMethod() {
        cout << "This is the Son class method" << endl;
    }
};

int main() {
    Son sonObj;
    // sonObj.grandparentMethod();  // Inherited from Grandparent
    sonObj.papaMethod();           // Inherited from Papa
    sonObj.kakaMethod();          // Inherited from Kaka
    sonObj.sonMethod();          // Defined in Son

    return 0;
}


