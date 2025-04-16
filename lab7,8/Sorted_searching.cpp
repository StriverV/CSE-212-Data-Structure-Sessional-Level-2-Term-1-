#include <bits/stdc++.h>
using namespace std;
//********** node class ************************
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

//********** insert at tail *****************************
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// ********** searching in sorted list **************************
Node* Search(Node* head, int item) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (item < tmp->val) {
            tmp = tmp->next;
        } else if (item == tmp->val) {
            return tmp;
        } else {
            return NULL;
        }
    }
    return NULL;
}

// ********** Main function ******************************
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    cout << "Enter values to create the sorted linked list & enter -1 to stop:" << endl;
    while (cin >> val) {
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int X;
    cout << "Enter Item: ";
    cin >> X;

    Node* tmp = Search(head, X);
    if (tmp != NULL) {
        cout << "Item found: " << tmp->val << endl;
    } else {
        cout << "Search is Unsuccessful" << endl;
    }

    return 0;
}
