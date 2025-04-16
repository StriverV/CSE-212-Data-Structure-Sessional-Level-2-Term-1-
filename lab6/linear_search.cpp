#include <iostream>
using namespace std;

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int arr[arraySize];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the item to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        if (arr[i] == target) {
            cout << "Item found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found" << endl;
    }

    return 0;
}
