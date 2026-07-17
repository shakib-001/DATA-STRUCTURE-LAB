#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool visited[size] = {false};

    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " occurs = " << count << " time";
        if (count > 1) cout << "s";
        cout << endl;
    }
    return 0;
}
