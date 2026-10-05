#include <iostream>
using namespace std;

#define MAX 5

class Deque {
    int arr[MAX];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    void insertFront(int value) {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Deque is Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = MAX - 1;
        }
        else {
            front--;
        }

        arr[front] = value;
        cout << value << " inserted at front\n";
    }

    void insertRear(int value) {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Deque is Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == MAX - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value;
        cout << value << " inserted at rear\n";
    }

    void deleteFront() {
        if (front == -1) {
            cout << "Deque is Empty\n";
            return;
        }

        cout << arr[front] << " deleted from front\n";

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == MAX - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    void deleteRear() {
        if (front == -1) {
            cout << "Deque is Empty\n";
            return;
        }

        cout << arr[rear] << " deleted from rear\n";

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = MAX - 1;
        }
        else {
            rear--;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Deque is Empty\n";
            return;
        }

        cout << "Deque elements: ";

        int i = front;
        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, value;

    while (true) {
        cout << "\n--- DEQUE OPERATIONS ---\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                dq.insertFront(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                dq.insertRear(value);
                break;

            case 3:
                dq.deleteFront();
                break;

            case 4:
                dq.deleteRear();
                break;

            case 5:
                dq.display();
                break;

            case 6:
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}
