#include <iostream>
using namespace std;
const int MAX_SIZE = 5;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
        } 

    bool isEmpty() {
        return (top == -1);
        }

    bool isFull() {
        return (top == MAX_SIZE - 1);
        }
        
    void push(int element) {
        if (!isFull()) {
            top++;
            arr[top] = element;
                cout << "Pushed element: " << element << " onto the stack.\n";
        } 
        
        else {
                cout << "Stack is full. Cannot push element " << element << ".\n";
        }
    }

    void pop() {
        if (!isEmpty()) {
            int poppedElement = arr[top];
            top--;
                cout << "Popped element: " << poppedElement << " from the stack.\n";
        } else {
                cout << "Stack is empty. Cannot pop from an empty stack.\n";
        }
    }

    int topElement() {
        if (!isEmpty()) {
            return arr[top];
        } else {
            cout << "Stack is empty.\n";
            return -1;
        }
    }
};
int main() {
    Stack myStack;
    for (int i = 1; i <= 5; ++i) {
        myStack.push(i);
    }
    myStack.push(6);
    while (!myStack.isEmpty()) {
        myStack.pop();
    }
    return 0;
    }
