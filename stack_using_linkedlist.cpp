#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* link;

    Node(int value) {
        data = value;
        link = NULL;
    }
};

Node* top = NULL;
bool isempty() {
    return top == NULL;
}

void push(int value) {
    Node* ptr = new Node(value);
    ptr->link = top;
    top = ptr;
    cout << value << " pushed into stack." << endl;
}

void pop() {
    if (isempty()) {
        cout << "Stack underflow!" << endl;
    }
    else {
        Node* temp = top;
        int poppedValue = top->data;
        top = top->link;
        delete temp;
        cout << poppedValue << " popped from stack." << endl;
    }
}
