#include <iostream>
using namespace std;
#pragma once

struct Node
{
	int num;
	Node* next = NULL;
};

class Stack
{
private:
	Node* head = NULL, * tail = NULL;
public:
	void add(int x);
	int pop();
	void show();
	int peek();
	bool not_empty();
	int len();

};

