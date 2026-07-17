#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 4, 8, 3, 9};
    int arr2[] = {5, 3, 7, 1, 6};
    bool found = false;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr1[i] == arr2[j]) {
                if (!found) cout << "Common Elements: ";
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) cout << "No common element";
    cout << endl;
    return 0;
}
