//85
#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};

    int pos = 1;

    while (head) {
        if (pos % 2 != 0)
            cout << head->data << " ";
        head = head->next;
        pos++;
    }

    return 0;
}