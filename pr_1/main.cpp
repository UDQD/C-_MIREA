#include <iostream>
using namespace std;
struct Node
{
    string x;
    Node* Next;
};
class Queue
{
    Node* Head, * Tail;
public:
    Queue() :Head(NULL), Tail(NULL) {};
    ~Queue();
    void Add_elem(string x);
    void Show();
    void del();
    void isempty();

};
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
    cout << " has been added \n";

    if (Head != NULL)
    {
        Tail->Next = temp;
        Tail = temp;
    }
    else Head = Tail = temp;
}

void Queue::del()
{
    if (Head != NULL)
    {
        Node* temp = Head;
        cout << "Elem " << Head->x << " out " << endl;
        Head = Head->Next;
        delete temp;
    }
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

void menu(Queue lst) {
    cout << "1 - add elem" << endl;
    cout << "2 - remove elem" << endl;
    cout << "3 - show first elem" << endl;
    cout << "4 - is queue empty" << endl;
    //cout << "5" << endl;
    int inp;
    cin >> inp;

    if (inp == 1) {
        cout << "write string: \n";
        string inp2;
        cin >> inp2;
        lst.Add_elem(inp2);
        menu(lst);
    } else if (inp == 2) {
        lst.del();
        menu(lst);

    } else if (inp == 3) {
        lst.Show();
        menu(lst);
    } else if (inp == 4) {
        lst.isempty();
        menu(lst);
    }
}

int main()
{
    Queue lst;
    menu(lst);

}





