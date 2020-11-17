#include <iostream>
#pragma once
using namespace std;

struct Node {
	int num = 0;
	Node* prev = NULL;
	Node* next = NULL;
};

class Deque
{
private:
	Node * left, * right;
public:
	Deque() : left(NULL), right(NULL) {}
	void add_left(int x);
	void add_right(int x);
	int pop_left();
	int pop_right();
	int peek_left();
	int peek_right();
	int len();
	void show();
};