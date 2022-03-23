// #include<iostream>
// #include<conio.h>
// using namespace std;

// class Node{
// 	private:
// 		int Data;
// 		Node *Next;
// 	public:
// 		void insert(int x);
// 		void print();
// };
// Node *Head;
// void Node::insert(int x)
// {
// 	Node *temp = new Node();
// 	temp->Data = x;
// 	temp->Next = Head;
// 	Head = temp;
// }

// void Node::print()
// {
// 	Node *temp = Head;
// 	cout<<"List is: ";
// 	while(temp != NULL)
// 	{
// 		cout<<temp->Data<<" ";
// 		temp = temp->Next;
// 	}
// 	cout<<"\n\n";
// }

// main()
// {
// 	Node list;
// 	Head = NULL;
// 	int size, number;
// 	cout<<"What is the size of list: ";
// 	cin>>size;
// 	for(int i = 1; i<=size; i++)
// 	{
// 		cout<<"\nEnter Number: ";
// 		cin>>number;
// 		list.insert(number);
// 		list.print();
// 	}

//     getch();
// }

/*#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}*/

/*#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: "
             << ptr->data << endl;
        ptr = ptr->next;
    }
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
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}*/

// insertion node

/*#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: "
             << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    int i = 0;
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}
Node *insertAtIndex(Node *head, int data, int index)
{

    Node *ptr = new Node();
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
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
    fourth->next = NULL;

    linkedListTraversal(head);

    head = insertAtFirst(head, 666);
    // head = insertAtIndex(head, 333, 1);
    // head = insertAtEnd(head, 444);
    // head = insertAfterNode(head, second, 34);
    cout << endl;
    linkedListTraversal(head);

    return 0;
}*/

// Deletion Node

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *deleteFirstNode(Node *head)
{

    Node *ptr = head;
    head = head->next;

    free(ptr);
    return head;
}

Node *deleteAtIndex(Node *head, int index)
{

    Node *ptr = head;
    Node *ptr2 = head->next;
    int i = 0;
    while (i < index - 1)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
        i++;
    }
    ptr->next = ptr2->next;
    free(ptr2);
    return head;
}

Node *deleteLastNode(Node *head)
{

    Node *ptr = head;
    Node *ptr2 = head->next;
    int i = 0;
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
        ptr = ptr->next;
    }
    free(ptr2);
    ptr->next = NULL;
    return head;
}
Node *deleteAtValue(Node *head, int value)
{

    Node *ptr = head;
    Node *ptr2 = head->next;
    int i = 0;
    while (ptr2->data != value && ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    if (ptr2->data = value)
    {
        ptr->next = ptr2->next;
        free(ptr2);
    }
    return head;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 26;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 42;
    third->next = fourth;

    fourth->data = 75;
    fourth->next = NULL;

    linkedListTraversal(head);

    cout << "After deleteFirstNode" << endl;

    // head = deleteFirstNode(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteLastNode(head);
    head = deleteAtValue(head,75);
    linkedListTraversal(head);

    return 0;
}
