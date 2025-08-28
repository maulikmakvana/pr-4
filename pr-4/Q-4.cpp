#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input size of array
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

    // Input row number
    int rowNum;
    cout << "\nEnter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int j = 0; j < cols; j++) {
        cout << arr[rowNum][j];
        rowSum += arr[rowNum][j];
        if (j < cols - 1) cout << ", ";
    }
    cout << "\nThe sum of a row " << rowNum << ": " << rowSum << endl;

    // Input column number
    int colNum;
    cout << "\nEnter column number: ";
    cin >> colNum;

    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < rows; i++) {
        cout << arr[i][colNum];
        colSum += arr[i][colNum];
        if (i < rows - 1) cout << ", ";
    }
    cout << "\nThe sum of column " << colNum << ": " << colSum << endl;

    return 0;
}
