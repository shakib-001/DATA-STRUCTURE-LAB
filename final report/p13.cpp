#include <iostream>
using namespace std;
struct Student {
    int id;
    int credits;
    float cgpa;
};
int main() {
    Student students[10] = {
        {101, 60, 3.80},
        {102, 45, 3.60},
        {103, 70, 3.90},
        {104, 55, 2.90},
        {105, 30, 3.00},
        {106, 65, 3.50},
        {107, 40, 3.20},
        {108, 80, 4.00},
        {109, 20, 3.10},
        {110, 50, 3.75}
    };
    cout << "Students with CGPA > 3.75:" << endl;
    for (int i = 0; i < 10; i++) {
        if (students[i].cgpa > 3.75) {
            cout << "ID: " << students[i].id << endl;
        }
    }
    cout << "\nStudents with Credits > 50:" << endl;
    for (int i = 0; i < 10; i++) {
        if (students[i].credits > 50) {
            cout << "ID: " << students[i].id << endl;
        }
    }
    return 0;
}
