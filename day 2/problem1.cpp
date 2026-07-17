#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;

    int arr1[size1], arr2[size2];

    cout << "Enter elements for the first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements for the second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
    cout << "Merged array in reverse order: ";
    for (int i = mergedSize - 1; i >= 0; i--) {
        cout << mergedArray[i] << " ";
    }
    return 0;
}
