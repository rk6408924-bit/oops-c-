
//81
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v, Node* n) {
        val = v;
        next = n;
    }
};

int main() {
    Node* head = new Node(5, nullptr);
    head->next = new Node(10, nullptr);

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    cout << "Last Node: " << temp->val;
    return 0;
}