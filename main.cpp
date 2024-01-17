#include"stack.h"

int main() {
    CharStack charStack;

    while (true) {
        cout << "\nChoose an operation:\n"
            << "1. Push\n"
            << "2. Pop\n"
            << "3. Get Size\n"
            << "4. Check if Empty\n"
            << "5. Check if Full\n"
            << "6. Clear Stack\n"
            << "7. Peek\n"
            << "8. Exit\n";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter a character to push: ";
            char value;
            cin >> value;
            charStack.Push(value);
            break;
        }
        case 2:
            charStack.Pop();
            break;
        case 3:
            cout << "Stack size: " << charStack.GetSize() << endl;
            break;
        case 4:
            cout << "Is stack empty: " << (charStack.IsEmpty() ? "Yes" : "No") << endl;
            break;
        case 5:
            cout << "Is stack full: " << (charStack.IsFull() ? "Yes" : "No") << endl;
            break;
        case 6:
            charStack.Clear();
            break;
        case 7:
            charStack.Peek();
            break;
        case 8:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 8." << endl;
        }
    }

    return 0;
}