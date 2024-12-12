#include <iostream>
using namespace std;

class CopyExample {
private:
    int value;

public:
    CopyExample(int v) : value(v) {
        cout << "Constructor called with value: " << value << endl;
    }

    CopyExample(const CopyExample &obj) {
        value = obj.value;
        cout << "Copy constructor called. Value: " << value << endl;
    }
};

int main() {
    CopyExample obj1(10);       
    CopyExample obj2 = obj1;    
    return 0;
}
