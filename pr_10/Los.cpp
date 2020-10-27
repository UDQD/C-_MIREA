#include "Los.h"
#include <iostream>
struct Node{
    char simb;
    int number = 1;
    Node *next = NULL;
    Node *next_layer = NULL;
    int binar_code = -1;
    bool is_last_layer = true;
};

//Los::~Los() {
//    Node* temp = head;
//    while (temp != NULL)
//
//    {
//        temp = head->next;
//        delete head;
//        head = temp;
//
//    }
//}

void Los::add_ell(char x){
    Node* temp = new Node;
    temp->simb = x;
    temp->next = NULL;

    if (head != NULL)
    {
        tail->next = temp;
        tail = temp;
    }
    else head = tail = temp;
};

Node *Los::find_ell(char x) {
    Node* temp = head;
    while (temp!=NULL){
        if (temp->simb == x){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void Los::inc_ell(Node *x) {
    x->number++;
}

int Los::count_true() {
    int count = 0;
    Node* temp = head;
    while (temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}
