#include <iostream>
using namespace std;

int main() {
    string word, rev = "";

    
    cout << "Enter a string: ";
    cin>>word;


    for(int i = word.length()-1; i >= 0;i--){
        rev += word[i];

    }

    cout<<rev<<" ";
    return 0;
}
