#include "Lds.h"

void Lds::add(int x) {
	Node* temp = new Node;
	temp->num = x;
	if (head != NULL) {
		temp->prev = tail;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
		
	}
	else head = tail = temp;
}

void Lds::show() {
	Node* temp = new Node;
	temp = head;
	while (temp != NULL) {
		cout << temp->num<<endl;
		temp = temp->next;
	}

}

void Lds::del_last() {
	Node* temp = new Node;
	temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	delete temp;

}

bool Lds::in_lds(int x) {
	Node* temp = new Node;
	bool t = false;
	temp = head;
	while (temp != NULL) {
		if (temp->num == x) {
			t = true;
		}
		temp = temp->next;
	}
	return t;
}

int Lds::len() {
	Node* temp = new Node;
	int counter = 0;
	temp = head;
	while (temp != NULL) {
		counter++;
		temp = temp->next;
	}
	return counter;
}

void Lds::del(int x) {
	Node* temp = new Node;
	temp = this->find(x);
	if (temp->prev != NULL && temp->next != NULL) {
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	else if (temp->prev != NULL && temp->next == NULL) {
		tail = tail->prev;
		tail->next = NULL;
	}
	else if (temp->prev == NULL && temp->next != NULL) {
		head = head->next;
		head->prev = NULL;
	}
	else if (temp->prev == NULL && temp->next == NULL) {
		tail = head = NULL;
	}
	delete temp;
}

Node* Lds::find(int x) {
	Node* temp = new Node;
	Node* out = new Node;
	//bool t = false;
	temp = head;
	while (temp != NULL) {
		if (temp->num == x) {
			out = temp;
			return out;
		}
		temp = temp->next;
	}
	return NULL;
}