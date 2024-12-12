#include <iostream>

using namespace std;

int main() {
    int num;


    cout << "Enter the number of students: ";
    cin >> num;


    string* studentNames = new string[num];


    for (int i = 0; i < num; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> studentNames[i]; 
    }


    cout << "List of Student Names:" << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student " << (i + 1) << ": " << studentNames[i] << endl;
    }


    delete[] studentNames;

    return 0;
}
