//84
#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};

    int count = 0;
    Node* temp = head;

    while (temp) {
        count++;
        temp = temp->next;
    }

    if (count % 2 == 0)
        cout << "Even length";
    else
        cout << "Odd length";

    return 0;
}