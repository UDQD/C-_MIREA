#ifndef PR_10_LOS_H
#define PR_10_LOS_H
#include <iostream>
//struct Node;
struct Node{
    Node *next = NULL;
    int id = NULL;
    char simb = '_';
    int number = 1;
    Node *next_layer = NULL;
    int binar_code = -1;
    bool is_last_layer = true;

};
class Los {
private:
    Node *head, *tail;
    int counter_id = 0;
public:
//    Node *min_1, *min_2;
    Los() :head(NULL), tail(NULL) {};
    void add_ell(char x);
    void add_ell(Node* x);
    Node *find_ell(char x);
    Node *find_ell(int x);
    void inc_ell(Node *x);
    int count_true();
    int* pare_min();
    int get_id();
    void inc_id();




};


#endif //PR_10_LOS_H
