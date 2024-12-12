#include <iostream>
using namespace std;

int sumofNatural(int n) {

    if (n == 0) {
        return 0;
    }

    else {
        return n + sumofNatural(n - 1);
    }
}

int main() {
    int N;

    cout << "Enter a positive integer N: ";
    cin >> N;

    int sum = sumofNatural(N);

    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
