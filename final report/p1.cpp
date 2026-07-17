#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    cout << "Array in normal order: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array in reverse order: ";
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
