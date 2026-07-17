#include <iostream>
using namespace std;

int main() {
    int x = 10;           // `x` is initialized to 10.
    int *p1 = &x;         // `p1` points to the address of `x`.
    int *p2 = &x;         // `p2` also points to the address of `x`.

    cout << (*p2)++ << endl; // Post-increment: Outputs the current value of `x` (10), then increments `x` to 11.
    cout << *p1 << endl;     // Outputs the updated value of `x` (11).

    x = 60;              // `x` is updated to 60. Both `p1` and `p2` still point to `x`.

    int *p3 = p1;        // `p3` points to the same address as `p1` (address of `x`).

    cout << ++(*p1) << endl; // Pre-increment: Increments `x` (60 -> 61), then outputs 61.
    cout << *p2 << endl;     // Outputs the updated value of `x` (61).

    cout << (*p1)++ << " " // Post-increment: Outputs the current value of `x` (61), then increments `x` to 62.
         << ++*p2 << " "   // Pre-increment: Increments `x` (62 -> 63), then outputs 63.
         << (*p3)++ << endl; // Post-increment: Outputs the current value of `x` (63), then increments `x` to 64.

    return 0;
}

