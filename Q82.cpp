//82
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

    int sum = 0;
    Node* temp = head;

    while (temp) {
        sum += temp->val;
        temp = temp->next;
    }

    cout << "Sum: " << sum;
    return 0;
}