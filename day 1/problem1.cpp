#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "first array: ";
    cin >> size1;
    cout << "second array: ";
    cin >> size2;

    int arr1[size1], arr2[size2];

    cout << "enter first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "enter second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int mergedsize = size1 + size2;
    int mergedarray[mergedsize];

    for (int i = 0; i < size1; i++) {
        mergedarray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedarray[size1 + i] = arr2[i];
    }
    cout << "reverse order: ";
    for (int i = mergedsize - 1; i >= 0; i--) {
        cout << mergedarray[i] << " ";
    }
    return 0;
}

