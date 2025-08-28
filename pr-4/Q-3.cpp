#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input size
    cout << "Enter row size: ";
    cin >> rows;
    cout << "Enter column size: ";
    cin >> cols;

    int arr[100][100], trans[100][100];

    // Input matrix
    cout << "\nEnter array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Finding transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = arr[i][j];
        }
    }

    // Output transpose matrix
    cout << "\nThe transpose matrix is:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
