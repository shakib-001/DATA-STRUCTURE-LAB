#include <iostream>
#include <string>
using namespace std;

string encode(string s, int j) {
    string result = s;
    for (int i = j; i < s.length(); i += (j + 1)) {
        if (s[i] != ' ') {
            result[i] = s[i] + 2;
        }
    }
    return result;
}
int main() {
    string s = "I am a student";
    int j = 2;
    string encodedString = encode(s, j);
    cout << "Original String: " << s << endl;
    cout << "Encoded String: " << encodedString << endl;

    return 0;
}

