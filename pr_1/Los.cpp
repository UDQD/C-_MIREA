#include "Los.h"
void Los::add_ell(int x) {
    Node *temp = new Node;
    temp->value = x;
    temp->next = NULL;
    if (head != NULL) {
        tail->next = temp;
        tail = temp;
    } else head = tail = temp;
};

void Los::add_ell(int x, int a) {
    Node *temp = new Node;
    Node *nx = new Node;
    Node *find = head;
    temp->value = x;
    temp->next = NULL;
    bool tr = false;

    while(find != NULL){
        if (find->value==a){
            nx = find->next;
            find->next = temp;
            temp->next = nx;



            tr = true;
            break;
        }
        find = find->next;
    }
    if(!tr){
        tail->next = temp;
        tail = temp;
    }


};

void Los::out_los() {
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

int Los::len_los() {
    int len = 0;
    Node *temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

bool Los::in_los(int x) {
    bool t = false;
    Node *temp = head;
    while(temp!=NULL){
        if(temp->value == x)    t = true;
        temp = temp->next;
    }
    return t;
}

void Los::del_ell(int x) {
    while (this->in_los(x)){
        Node *temp = head;
        while (temp->value!=x){
            temp = temp->next;
        }
        if(temp == head)
        {
            head = head->next;
        }
        else if(temp == tail)
        {
            Node *temp2 = head;
            while (temp2->next!=tail){
                temp2 = temp2->next;
            }
            temp2->next = NULL;
        }
        else
        {
            Node *temp2 = head;
            while (temp2->next->value!=x){
                temp2 = temp2->next;
            }
            temp2->next = temp->next;

        }


    }
}
