#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input size of 2D array
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[100][100];

    // Input elements
    cout << "\nEnter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Assume first element is max
    int max = arr[0][0];

    // Check all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Output
    cout << "\nThe largest element is: " << max << endl;

    return 0;
}
