//51
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void search(int key) {
    Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Found at position " << pos;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Not Found";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    search(20);
    return 0;
}
