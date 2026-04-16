//86
#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

int main() {
    Node* head = new Node{1, new Node{2, new Node{4, nullptr}}};

    int count = 0;

    while (head) {
        if (head->data % 2 == 0)
            count++;
        head = head->next;
    }

    cout << "Even Nodes: " << count;

    return 0;
}