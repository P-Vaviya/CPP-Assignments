#include <iostream>
using namespace std;

class Addition{
    public: 
    float num1, num2, result;

    void read() {
        cout<<"Enter two numbers : "<<endl;
        cin>>num1>>num2;
    } 

    void sum(){
        result = num1 + num2;
    } 

    void print(){
        cout<<"The sum of given numbers is : "<<result<<endl;

    } 
};

int main(){
    Addition obj1;
    Addition obj2;
    obj1.read();
    obj1.sum();
    obj1.print();
    obj2.read();
    obj2.sum();
    obj2.print();
}