#include "Stack.h"
void Stack::add(int x) {
	Node* temp = new Node;
	temp->num = x;
	if (head != NULL) {
		temp->next = head;
		head = temp;
	}
	else head = tail = temp;
}

int Stack::pop() {
	int out = head->num;
	head = head->next;
	return out;
}

void Stack::show() {
	Node* temp = new Node;
	temp = head;
	while (temp != NULL) {
		cout << temp->num << endl;
		temp = temp->next;
	}
}

int Stack::peek() {
	return head->num;
}

bool Stack::not_empty() {
	return head != NULL;
}

int Stack::len() {
	Node* temp = new Node;
	temp = head;
	int counter = 0;
	while (temp != NULL) {
		counter++;
		temp = temp->next;
	}
	return counter;
}

