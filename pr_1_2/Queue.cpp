//
// Created by UDQD on 21.09.2020.
//
#include <iostream>
using namespace std;

#include "Queue.h"

Queue::~Queue()
{
    Node* temp = Head;
    while (temp != NULL)

    {
        temp = Head->Next;
        delete Head;
        Head = temp;

    }
}
void Queue::Add_elem(string x)
{
    Node* temp = new Node;
    temp->x = x;
    temp->Next = NULL;
    cout << "Elem ";
    cout << x;
    cout << " was added in \n";

    if (Head != NULL)
    {
        Tail->Next = temp;
        Tail = temp;
    }
    else Head = Tail = temp;
}

string Queue::del()
{
    if (Head != NULL)
    {
        Node* temp = Head;
        cout << "Elem " << Head->x << " out " << endl;
        Head = Head->Next;
        return temp->x;
        delete temp;

    }
    else cout << "queue is empty \n";
}
void Queue::isempty() {
    Node* temp = Head;
    if (temp == NULL)	cout << "queue is empty \n";
    else cout << "queue is not empty \n";
}
void Queue::Show() {
    Node* temp = Head;
    if (temp == NULL)	cout << "queue is empty \n";
    else cout << "Elem " << temp->x << " - first in queue " << "\n";
}