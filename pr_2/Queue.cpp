#include <iostream>

using namespace std;

#include "Queue.h"

Queue::~Queue() {
    Node *temp = Head;
    while (temp != NULL) {
        temp = Head->Next;
        delete Head;
        Head = temp;

    }
}

void Queue::Add_elem(string x) {
    Node *temp = new Node;
    temp->x = x;
    temp->Next = NULL;
//    cout << "Elem ";
//    cout << x;
//    cout << " was added\n";

    if (Head != NULL) {
        Tail->Next = temp;
        Tail = temp;
    } else Head = Tail = temp;
}

void Queue::del() {
    if (Head != NULL) {
        Node *temp = Head;
//        cout << "Elem " << Head->x << " out " << endl;
        Head = Head->Next;
//        return temp->x;
        delete temp;

    } else cout << "queue is empty \n";
}

string Queue::Show() {
    Node *temp = Head;
    return temp->x;
//    if (temp == NULL)	cout << "queue is empty \n";
//    else cout << "Elem " << temp->x << " - first in queue " << "\n";
}

int Queue::len() {
    Node *temp = Head;
    int c = 0;
    if (temp == NULL) return 0;
    else {
        while (temp != NULL) {
            temp = temp->Next;
            c++;
        }
        return c;
    }
}