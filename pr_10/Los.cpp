#include "Los.h"
#include <iostream>


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

Node* Los::pare_min() {

    Node* temp = head;
//    Node* temp_min_1 = new Node;
//    Node* temp_min_2 = new Node;
    static Node temp_min[2];
    unsigned long big_number = pow(2,31)-1;
    temp_min[0].number = big_number;
    temp_min[1].number = big_number;
    while (temp!=NULL){
        if(temp->is_last_layer) {
            if (temp->number < temp_min[0].number){
                temp_min[1] = temp_min[0];
                temp_min[0] = *temp;
            }
            else if (temp->number < temp_min[1].number) temp_min[1] = *temp;
            temp = temp->next;
        }
    }
//    n1 = temp_min_1;
//    n2 = temp_min_2;
    return temp_min;


}


