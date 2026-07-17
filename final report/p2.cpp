#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;

    return 0;
}

