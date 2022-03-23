#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void linkedListTraversal(Node *head)
{
    Node *ptr = head;
    do
    {
        cout << "Element: "
             << ptr->data << endl;
        ptr = ptr->next;

    } while (ptr != head);
}

Node *insertAtfirst(Node *head, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
Node *insertAtEnd(Node *head, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;

    return head;
}

Node *insertAtindex(Node *head, int data, int index)
{

    Node *ptr = new Node();
    ptr->data = data;

    Node *p = head;

    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

Node *insertAfterNode(Node *head, Node *prevNode, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 45;
    head->next = second;

    second->data = 88;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 87;
    fourth->next = head;

    linkedListTraversal(head);

    cout << "After Add node at firstIndex" << endl;

    head = insertAtfirst(head, 74);
    // head = insertAtEnd(head, 75);
    // head = insertAtindex(head, 75,3);
    // head = insertAfterNode(head, second, 34);

    linkedListTraversal(head);

    return 0;
}
