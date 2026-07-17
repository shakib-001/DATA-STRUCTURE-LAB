#include <iostream>
using namespace std;
int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArray[size1 + size2];

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
    cout << "Merged Array in Reverse Order: ";
    for (int i = size1 + size2 - 1; i >= 0; i--) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
