#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { 
        cout << "Base class show function." << endl;
    }

    virtual ~Base() { 
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override { 
        cout << "Derived class show function." << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();               

    delete ptr;               
    
    return 0;
}
