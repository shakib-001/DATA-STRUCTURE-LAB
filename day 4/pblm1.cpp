#include<iostream>
using namespace std;

class stack{
    int* arr[100];
    int top;
    int maxsize;
public:
    stack(int size=100){ maxsize =size;top=0;}
    bool isEmpty();
    bool isFull();
    bool push(int Element);
    bool pop();
    int topElement();
    void show();
};
