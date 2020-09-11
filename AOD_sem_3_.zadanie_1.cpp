#include <iostream>
using namespace std;
struct Node
{
	int x;
	Node* Next;
};
class Queue
{
	Node* Head, * Tail;
public:
	Queue() :Head(NULL), Tail(NULL) {};
	~Queue();
	void Add(int x);
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
void Queue::Add(int x)
{
	Node* temp = new Node;
	temp->x = x;
	temp->Next = NULL;
	cout << "Ёлемент ";
	cout << x;
	cout << " добавлен \n";

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
		cout << "Ёлемент " << Head->x << " ¬ышел " << endl;
		Head = Head->Next;
		delete temp;
	}
}
void Queue::isempty() {
	Node* temp = Head;
	if (temp == NULL)	cout << "empty \n";
	else cout << "not empty \n";
}
void Queue::Show() {
	Node* temp = Head;
	cout << "Ёлемент " << temp->x << " - первый в очереди " << "\n";
}

int main()
{

	setlocale(LC_ALL, "Russian");
	Queue lst;
	while (true) {
		cout << "1 - добавить элемент" << endl;
		cout << "2 - удалить элемент" << endl;
		cout << "3 - показать первый элемент в очереди" << endl;
		cout << "4 - проверить пуста€ ли очередь" << endl;
		//cout << "5" << endl;
		int inp;
		cin >> inp;

		if (inp == 1) {
			cout << "¬ведите число: \n";
			int inp2;
			cin >> inp2;
			lst.Add(inp2);
		}
		else if (inp == 2) {
			lst.del();

		}
		else if (inp == 3) {
			lst.Show();
		}
		else if (inp == 4) {
			lst.isempty();
		}

	}


	/*
	setlocale(LC_ALL, "Russian");
	Queue lst;
	lst.isempty();
	//system("CLS");
	lst.Add(4);
	lst.Add(5);
	lst.isempty();
	lst.Add(36);
	lst.Show();


	lst.del();
	lst.isempty();
	lst.del();
	cout << endl;

	lst.isempty();
	//system("PAUSE");
	return 0;
	*/

}