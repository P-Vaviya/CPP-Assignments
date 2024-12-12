#include <iostream>
using namespace std;

class Rectangle {
public:
    double length, width;

    void getData() {
        cout<<"Enter the length and width of the rectangle"<<endl;
        cin>>length>>width;
    }

    void area() {
        cout<<"The Area of the rectangle : "<<length*width<<endl;
    }

    void display() {
        cout<<"The Length of the rectangle : "<<length<<endl;
        cout<<"The Width of the rectangle : "<<width<<endl;
    }
};

int main() {
    Rectangle R;
    R.getData();
    R.area();
    R.display();

    return 0;
}