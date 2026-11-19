/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    Node* top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int data)
    {
        Node* newNode = new Node(data);

        newNode->next = top;
        top = newNode;

        size++;
    }

    void pop()
    {
        if (top == NULL)
        {
            return;
        }

        Node* temp = top;
        top = top->next;

        delete temp;
        size--;
    }

    int getTop()
    {
        if (top == NULL)
        {
            return -1;
        }

        return top->data;
    }
};