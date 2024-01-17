#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstring>
using namespace std;



class CharStack {
private:
    char* stack;   
    int maxStackSize; 
    int top; 

public:
    CharStack(int size = 10) : maxStackSize(size), top(-1) {
        stack = new char[maxStackSize];
    }

    ~CharStack() {
        delete[] stack;
    }

    bool IsEmpty() const {
        return top == -1;
    }

    bool IsFull() const {
        return top == maxStackSize - 1;
    }

    void Push(char value) {
        if (IsFull()) {
            ResizeStack();
        }
        stack[++top] = value;
        cout << "Pushed: " << value << endl;
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

private:
    void ResizeStack() {
        int newMaxSize = maxStackSize * 2;  
        char* newStack = new char[newMaxSize];

       
        for (int i = 0; i <= top; ++i) {
            newStack[i] = stack[i];
        }

        delete[] stack;
        stack = newStack;
        maxStackSize = newMaxSize;

        cout << "Stack resized. New size: " << maxStackSize << endl;
    }
};
#endif