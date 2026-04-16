//77
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int main() {
    Node* head = new Node{1,nullptr};
    head->next = new Node{2,nullptr};
    head->next->next = new Node{3,nullptr};

    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}