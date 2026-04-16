//79
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int main() {
    Node* head = new Node{1,nullptr};
    head->next = new Node{2,nullptr};

    head = head->next;

    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}