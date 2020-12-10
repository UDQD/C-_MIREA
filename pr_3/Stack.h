#ifndef PR_3_STACK_H
#define PR_3_STACK_H
#include <iostream>
using namespace std;
struct Node{
    int x = 0;
    Node* next = NULL;
};

class Stack {
private:
    Node* top;
public:
    Stack(): top(NULL){};

};


#endif
