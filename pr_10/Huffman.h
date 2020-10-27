#ifndef PR_10_HUFFMAN_H
#define PR_10_HUFFMAN_H
#include <iostream>
#include <list>
#include "Los.h"

using namespace std;

class Huffman {
private:
    Los los;
//    Los list_of_nodes;
    string name = "A";

public:
    void set_string(string s);
    void compress();
    void get_code();
    void make_tree();


};


#endif //PR_10_HUFFMAN_H
