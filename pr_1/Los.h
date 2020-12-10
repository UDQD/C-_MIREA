#ifndef PR_1_LOS_H
#define PR_1_LOS_H

#include <iostream>

using namespace std;

struct Node {
    Node *next = NULL;
    int value = 0;
};

class Los {
private:
    Node *head, *tail;
public:
    Los() : head(NULL), tail(NULL) {};

    void add_ell(int x);

    void add_ell(int x, int a);

    void del_ell(int x);

    int len_los();

    void out_los();

    bool in_los(int x);

};


#endif
