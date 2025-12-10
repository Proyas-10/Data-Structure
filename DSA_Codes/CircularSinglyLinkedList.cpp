#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularSinglyLinkedList {
    Node* head;
public:
    CircularSinglyLinkedList() { head = nullptr; }

    void insert(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)\n";
    }
};

int main() {
    CircularSinglyLinkedList csll;
    csll.insert(10);
    csll.insert(20);
    csll.insert(30);
    csll.display();
}