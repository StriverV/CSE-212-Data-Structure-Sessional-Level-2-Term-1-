
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
//********** sort ascending *****************************
// void sort_linked_list(Node*& head){
//     for(Node* i = head; i !=NULL; i = i->next){
//            for(Node* j = i->next; j != NULL; j = j->next){
//                if(i->val > j->val){
//                    swap(i->val , j->val);
//                }
//            }
//     }
// }
// // ********** min_val *****************************

int min_val_in_linked_list(Node*& head){
    int min = INT_MAX;
    for(Node* i = head; i !=NULL; i = i->next){
         if(i->val < min){
             min = i->val;
         }
    }
    return min;
}

// ********** max _val*****************************

int max_val_in_linked_list(Node*& head){
    int max = INT_MIN;
    for(Node* i = head; i != NULL; i = i->next){
         if(i->val > max){
             max = i->val;
         }
    }
    return max;
}
// ********** print *****************************
// void  print_linked_list(Node* head){
//     Node* tmp = head;

//     while(tmp != NULL){
//         cout << tmp->val << endl;
//         tmp = tmp->next;
//     }
// }

// ********** Main ******************************
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
   // Node* tmp  = head;


    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int Max = max_val_in_linked_list(head);
    int Min = min_val_in_linked_list(head);

    int Diff = Max - Min;
    cout << Diff << endl;

    return 0;
}
