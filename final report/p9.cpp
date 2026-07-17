#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num, count = 0;

    cout << "Input a number to search: ";
    cin >> num;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    cout << "The number " << num << " occurs " << count << " times in the array." << endl;

    return 0;
}

