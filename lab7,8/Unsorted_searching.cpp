#include <bits/stdc++.h>

using namespace std;
//********** node class ************************
class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//********** insert at tail *****************************
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// ********** Unsorted Search  **************************
Node* search(Node* head, int item) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val == item) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}


// ********** Main ******************************
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while( cin >> val ){
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }


    int X;
    cout << "Enter values to create the sorted linked list & enter -1 to stop: ";
    cin >> X;

    Node* ptr = search(head, X);
    if(ptr != NULL) {
        cout << "Item found: " << ptr>val << endl;
    } else {
        cout << "Search is Unsuccessful" << endl;
    }



    return 0;
}

