#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val = 0) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, Node*& avail, int val) {
    if (avail == NULL) {
        cout << "Overflow!" << endl;
        return;
    }

    Node* newNode = avail;
    avail = avail->next;
    newNode->val = val;
    newNode->next = head;
    head = newNode;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* avail = NULL;

    avail = new Node(0);
    avail->next = new Node(0);
    avail->next->next = new Node(0);

    int val;
    cout << "Enter values to insert at head (-1 to stop):" << endl;
    while (cin >> val) {
        if (val == -1)
            break;
        insert_at_head(head, avail, val);
    }

    cout << "Final list after insertion at head: ";
    print_list(head);

    return 0;
}
