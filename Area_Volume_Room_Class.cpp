#include <iostream>
using namespace std;

class Room {
public:
    double length, width, height;
    void getData() {
        cout<<"Enter the length and width and height of the room"<<endl;
        cin>>length>>width>>height;
    }

    void area() {
        cout<<"The Area of the room : "<<length*width<<endl;
    }

    void volume() {
        cout<<"The Volume of the room : "<<length*width*height;
    }
};

int main() {
    Room R;
    R.getData();
    R.area();
    R.volume();

    return 0;
}