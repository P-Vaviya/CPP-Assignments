#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];


    cout << "Enter elements of Matrix1 :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements of Matrix2 :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    cout << "Sum of Matrix1 and Matrix2 :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t"; 
        }
        cout << endl;
    }

    return 0;
}
