class Node {
    public:
    int data;
    Node*next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
#include <iostream>
using namespace std;

class Stack{
    private:
    Node*top;
    public:
    Stack() {
        top = NULL;
    }
    void push (int value) {
        Node* newNode = new Node(value);
        newnode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == NULL) {
            cout << "stack underflow\n";
            return ;
            cout<<"Deleted :" << top->data << endl;
            top = top->next;
        }
    }
    void peek(){
        if (top == NULL){
            cout << "stack is empty\n";
            else {
                cout << "top element:" << top->data << endl;
            }
        }
    }
    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
            cout << "NULL\n";
        }
    }
}
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    cout << endl ;
}
