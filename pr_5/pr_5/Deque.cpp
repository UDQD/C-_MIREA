#include "Deque.h"

void Deque::add_left(int x) {
	Node* temp = new Node;
	temp->num = x;
	if (left != NULL) {
		left->prev = temp;
		temp->next = left;
		left = temp;
	}
	else {
		right = left = temp;
	}
}

void Deque::add_right(int x) {
	Node* temp = new Node;
	temp->num = x;
	if (right != NULL) {
		right->next = temp;
		temp->prev = right;
		right = temp;
	}
	else {
		right = left = temp;
	}
}

int Deque::pop_left() {
	Node* temp = new Node;
	if (left == right) {
		temp = left;
		left = right = NULL;
		return temp->num;
	}
	
	temp = left;
	int out = left->num;
	left = left->next;
	left->prev = NULL;
	delete temp;
	return out;
}

int Deque::pop_right() {
	Node* temp = new Node;
	if (left == right) {
		temp = left;
		left = right = NULL;
		return temp->num;
	}
	temp = right;
	int out = right->num;
	right = right->prev;
	right->next = NULL;
	delete temp;
	return out;
}

int Deque::peek_left() {
	return left->num;
}

int Deque::peek_right() {
	return right->num;
}

int Deque::len() {
	Node* temp = new Node;
	int counter = 0;
	temp = left;
	while (temp != NULL) {
		counter++;
		temp = temp->next;
	}
	return counter;
}

void Deque::show() {
	Node* temp = new Node;
	temp = left;
	while (temp != NULL) {
		cout << temp->num<<endl;
		temp = temp->next;
	}
}