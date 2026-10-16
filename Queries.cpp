
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node* next;

    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, long long val)
{
    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, long long val)
{
    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void delete_at_index(Node* &head, Node* &tail, long long idx)
{
    if (head == NULL || idx < 0)
        return;

    if (idx == 0)
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node* tmp = head;

    for (long long i = 0; i < idx - 1; i++)
    {
        if (tmp->next == NULL)
            return;

        tmp = tmp->next;
    }

    if (tmp->next == NULL)
        return;

    Node* delnode = tmp->next;
    tmp->next = delnode->next;

    if (delnode == tail)
        tail = tmp;

    delete delnode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val;

        if (tmp->next != NULL)
            cout << " ";

        tmp = tmp->next;
    }

    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--)
    {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, tail, V);
        }

        print_linked_list(head);
    }

    return 0;
}
