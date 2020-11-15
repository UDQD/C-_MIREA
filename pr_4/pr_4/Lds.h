#include <iostream>
#pragma once
using namespace std;

struct Node {
	int num;
	Node* prev = NULL;
	Node* next = NULL;
};

class Lds
{
private:
	Node *head = NULL, *tail = NULL;
public:
	void add(int x);
	void show();
	void del_last();
	bool in_lds(int x);
	int len();
	void del(int x);
	Node* find(int x);
	
};

