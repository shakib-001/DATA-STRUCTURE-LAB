#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNumber of comparisons = " << comparisons;
    cout << "\nNumber of swaps = " << swaps << endl;
}

int main() {
    int arr[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    return 0;
}
