#ifndef PR_10_LOS_H
#define PR_10_LOS_H
#include <iostream>
struct Node;

class Los {
private:
    Node *head, *tail;
public:
    Los() :head(NULL), tail(NULL) {};
    void add_ell(char x);
    Node *find_ell(char x);
    void inc_ell(Node *x);
    int count_true();
    Node *pare_min(Node* n1, Node* n2);



};


#endif //PR_10_LOS_H
