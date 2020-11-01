#ifndef PR_10_LOS_H
#define PR_10_LOS_H
#include <iostream>
//struct Node;
struct Node{
    Node *next = NULL;
    char simb = '_';
    int number = 1;
    Node *next_layer = NULL;
    int binar_code = -1;
    bool is_last_layer = true;
};
class Los {
private:
    Node *head, *tail;
public:
//    Node *min_1, *min_2;
    Los() :head(NULL), tail(NULL) {};
    void add_ell(char x);
    Node *find_ell(char x);
    void inc_ell(Node *x);
    int count_true();
    Node* pare_min();




};


#endif //PR_10_LOS_H
