#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    void push(int val) {
        if (top == MAX - 1) { cout << "Stack Overflow\n"; return; }
        arr[++top] = val;
    }

    void pop() {
        if (top == -1) { cout << "Stack Underflow\n"; return; }
        top--;
    }

    void display() {
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
}