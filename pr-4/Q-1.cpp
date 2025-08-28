#include <iostream>
using namespace std;

int main() {
    int size;

    // User input 
    cout << "Enter the array's size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    // User output
    cout << "Negative elements from an Array: ";
    bool first = true;  // for comma separation
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (!first) {
                cout << ", ";
            }
            cout << arr[i];
            first = false;
        }
    }

    cout << endl;
    return 0;
}
