#include <iostream>
using namespace std;

const int MAX = 10;
int stack[MAX];
int top = -1;
bool isempty() {
    return top == -1;
}

bool isfull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isfull()) {
        cout << "Stack overflow!" << endl;
        
    }
    else{
        top++;

    stack[top] = value;

cout<<value<<" pushed into stack." << endl;
    }

}

void pop() {
    if (isempty()) {
        cout << "Stack underflow!" << endl;
    }
    else{
        int poppedValue = stack[top];
        top--;
        cout<<poppedValue<<" popped from stack." << endl;
    }
}
void peek() {
    if (isempty()) {
        cout << "Stack is empty!" << endl;
    }
    else{
        cout << "Top element is: " << stack[top] << endl;
    }
}

void display() {
    if (isempty()) {
        cout << "Stack is empty!" << endl;
    }
    else{
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    do {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
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
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
