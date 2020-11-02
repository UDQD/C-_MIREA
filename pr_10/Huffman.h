#ifndef PR_10_HUFFMAN_H
#define PR_10_HUFFMAN_H
#include <iostream>
#include <list>
#include "Los.h"

using namespace std;

class Huffman {
private:
    Los los;
    Los tree;
    string name = "A";

public:
    void set_string(string s);
    void make_tree();
    void compress();
    void get_code();



};


#endif //PR_10_HUFFMAN_H
