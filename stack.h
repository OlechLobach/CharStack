#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstring>
using namespace std;


class CharStack {
private:
    static const int maxStackSize = 100;  
    char stack[maxStackSize];
    int top;  

public:
    CharStack() : top(-1) {}  

    bool IsEmpty() const {
        return top == -1;
    }

    bool IsFull() const {
        return top == maxStackSize - 1;
    }

    void Push(char value) {
        if (!IsFull()) {
            stack[++top] = value;
            cout << "Pushed: " << value << endl;
        }
        else {
            cout << "Error: Stack is full. Cannot push." << endl;
        }
    }

    void Pop() {
        if (!IsEmpty()) {
            char poppedValue = stack[top--];
            cout << "Popped: " << poppedValue << endl;
        }
        else {
            cout << "Error: Stack is empty. Cannot pop." << endl;
        }
    }

    int GetSize() const {
        return top + 1;
    }

    void Clear() {
        top = -1;
        cout << "Stack cleared." << endl;
    }

    void Peek() const {
        if (!IsEmpty()) {
            cout << "Top element: " << stack[top] << endl;
        }
        else {
            cout << "Error: Stack is empty. Cannot peek." << endl;
        }
    }
};
#endif