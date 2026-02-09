#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value){
    if(top == MAX - 1) { 
        cout << "Stack overflow! cannot push" << value << endl;
    } else {
        top++;
        stack[top]=value;
        cout << value << "pushed into stack" << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop" << endl;
    } else {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty. No top element" << endl;
    } else {
        cout << "Top element is " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty " << endl;
    } else {
        cout << "Elements are: ";
        for (int i = top; i >=  0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
do {
cout << "1. Push\n";
cout << "2. Pop\n";
cout << "3. Peek\n";
cout << "4. Display\n";
cout << "5. Exit\n";
switch (choice) {

    push(value);
    pop();
    peek();
    display();
    cout ,,  "Exiting program";

    } while (choice != 5);
return 0;
}
}





