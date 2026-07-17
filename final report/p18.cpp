#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
int main() {
    int arr[] = {11, 22, 32, 45, 54, 64, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the number to search for: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Element " << key << " found at index " << result << endl;
    else
        cout << "Element " << key << " not found in the array" << endl;

    return 0;
}
