
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void remove_duplicates(Node* head) {
    Node* i = head;

    while (i != NULL) {
        Node* prev = i;
        Node* j = i->next;

        while (j != NULL) {
            if (j->val == i->val) {
                Node* deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            }
            else {
                prev = j;
                j = j->next;
            }
        }

        i = i->next;
    }
}

void print_linked_list(Node* head) {
    Node* tmp = head;

    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}
