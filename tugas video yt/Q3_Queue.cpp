
#include <iostream>
using namespace std;

int queuedata[5];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == 4) {
        cout << "Queue Overflow!" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }

        rear++;
        queuedata[rear] = value;

        cout << value << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << queuedata[front] << " removed successfully." << endl;

        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void showFront() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element: " << queuedata[front] << endl;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queuedata[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====" << endl;
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
