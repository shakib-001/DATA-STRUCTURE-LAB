#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}


