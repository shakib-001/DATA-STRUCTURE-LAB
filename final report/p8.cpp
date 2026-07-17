#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 3, 6, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    set<int> uniqueElements;

    for (int i = 0; i < size; i++) {
        uniqueElements.insert(arr[i]);
    }

    if (uniqueElements.size() == size) {
        cout << "Array already unique!" << endl;
    } else {
        cout << "Unique Array: ";
        for (int elem : uniqueElements) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

