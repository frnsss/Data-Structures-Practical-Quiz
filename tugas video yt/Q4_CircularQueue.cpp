#include <iostream>
using namespace std;

int dataku[5];
int front = 0;
int rear = -1;
int count = 0;

void enqueue(int value) {
    if (count == 5) {
        cout << "Queue Overflow!" << endl;
    } else {
        rear = (rear + 1) % 5;
        dataku[rear] = value;
        count++;

        cout << value << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (count == 0) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << dataku[front] << " removed successfully." << endl;

        front = (front + 1) % 5;
        count--;
    }
}

void showFront() {
    if (count == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element: " << dataku[front] << endl;
    }
}

void display() {
    if (count == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";

        for (int i = 0; i < count; i++) {
            cout << dataku[(front + i) % 5] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== CIRCULAR QUEUE MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                showFront();
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
