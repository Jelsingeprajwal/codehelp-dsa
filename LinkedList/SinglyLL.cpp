#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int val = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int d) // took ref arg in head to change in original head
{
    // new node creation
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(Node *&head, Node *&tail, int pos, int d)
{
    // starting node insertion
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next; // Traversing in LL
        cnt++;
    }

    // inserting at tail edge case
    if (temp->next == NULL)
    {
        /* code */
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    // create a new pointer to store head
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {

        Node *prev = NULL;
        Node *curr = head;

        int cnt = 1;
        while (cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    /* code */

    Node *node1 = new Node(10); // Dynamic allocation
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // point head to new node
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // insertAtHead(head, 12);
    // insertAtHead(head, 14);
    // insertAtHead(head, 16);

    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    insertAtPos(head, tail, 3, 22);
    insertAtPos(head, tail, 1, 90); // 1st pos
    insertAtPos(head, tail, 7, 99); // last pos
    print(head);
    deleteNode(1, head);
    print(head);

    return 0;
}
