//78
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int main() {
    Node* head = new Node{10,nullptr};
    head->next = new Node{20,nullptr};
    head->next->next = new Node{30,nullptr};

    int count = 0;
    Node* temp = head;

    while (temp) {
        count++;
        temp = temp->next;
    }

    cout << "Length: " << count;
    return 0;
}