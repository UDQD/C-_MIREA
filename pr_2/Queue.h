#include <iostream>

#ifndef PR_1_2_QUEUE_H
#define PR_1_2_QUEUE_H

struct Node {
    std::string x;
    Node *Next = NULL;
};

class Queue {

    Node *Head, *Tail;
public:
    Queue() : Head(NULL), Tail(NULL) {};

    ~Queue();

    void Add_elem(std::string x);

    string Show();

    void del();

    int len();


};


#endif //PR_1_2_QUEUE_H
