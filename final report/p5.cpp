#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << "Factorial: " << factorial(num) << endl;
    } else {
        cout << "Error! Not a prime number." << endl;
    }
    return 0;
}
