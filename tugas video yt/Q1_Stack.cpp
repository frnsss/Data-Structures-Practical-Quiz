
#include <iostream>
using namespace std;

int stackData[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackData[top] = value;
        cout << value << " inserted successfully." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stackData[top] << " removed successfully." << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stackData[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stackData[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Program finished." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
