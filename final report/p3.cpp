#include <iostream>
using namespace std;

void printOddNumbers(int start, int last) {
    for (int i = start; i <=last; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int start, last;
    cout << "starting value: ";
    cin >> start;
    cout << "ending value: ";
    cin >> last;
    cout << "Odd numbers in the range: ";
    printOddNumbers(start, last);

    return 0;
}
