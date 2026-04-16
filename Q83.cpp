//83
#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

int main() {
    Node* head = new Node{1, new Node{5, new Node{3, nullptr}}};

    int maxVal = head->data;

    while (head) {
        if (head->data > maxVal)
            maxVal = head->data;
        head = head->next;
    }

    cout << "Max: " << maxVal;
    return 0;
}