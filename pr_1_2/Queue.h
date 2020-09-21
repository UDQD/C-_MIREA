//
// Created by UDQD on 21.09.2020.
//
#include <iostream>

#ifndef PR_1_2_QUEUE_H
#define PR_1_2_QUEUE_H

struct Node
{
    std::string x;
    Node* Next;
};

class Queue {

        Node *Head, *Tail;
        public:
        Queue() :Head(NULL), Tail(NULL)
        {};
        ~Queue();
        void Add_elem(std::string x);
        void Show();
        void del();
        void isempty();


};


#endif //PR_1_2_QUEUE_H
