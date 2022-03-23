#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int data;
};

void linkedListTraversal(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }

    // Node *ptr1= ptr;
    // while (ptr1 != NULL)
    // {
    //     cout << "Element: " << ptr1->data << endl;
    //     ptr1 = ptr1->prev;
    // }
}
Node *insertAtIndex(Node *head, int index, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    Node *ptr2 = head;
    Node *ptr3 = ptr2->next;
    int i = 0;
    while (i != index - 1)
    {
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
        i++;
    }
    ptr2->next = ptr;
    ptr->next = ptr3;
    ptr3->prev = ptr;
    ptr->prev = ptr2;
    return head;
}

Node *insertAtFirdtFirst(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;

    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};
Node *tail;

Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;

    Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;

    cout << "After inserting At the end " << endl;

    return head;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 34;
    head->prev = NULL;
    head->next = second;

    second->data = 42;
    second->prev = head;
    second->next = third;

    third->data = 26;
    third->prev = second;
    third->next = fourth;

    fourth->data = 75;
    fourth->prev = third;
    fourth->next = NULL;

    linkedListTraversal(head);

    // head = insertAtFirdtFirst(head, 444);
    // head = insertAtEnd(head, 99);
    cout << endl;
    head = insertAtIndex(head, 3, 20);
    linkedListTraversal(head);

    return 0;
}
