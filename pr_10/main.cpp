#include <iostream>
#include "Huffman.h"
#include "Los.h"
//#include "Los.cpp"
int main() {



    Huffman a;
    a.set_string("afahhhhqqq");
    a.make_tree();
//    Los l;
//    Node* temp_nodes;
//    Node min_nodes[2];
//    l.add_ell('d');
//    l.add_ell('g');
//    l.add_ell('j');
//    l.find_ell('d')->is_last_layer = false;
//    cout<<l.count_true();
//    l.add_ell('y');
//    l.add_ell('u');
//    l.inc_ell(l.find_ell('j'));
//    l.inc_ell(l.find_ell('j'));
//    l.inc_ell(l.find_ell('g'));
//    l.inc_ell(l.find_ell('y'));
//    temp_nodes = l.pare_min();
//    min_nodes[0] = temp_nodes[0];
//    min_nodes[1] = temp_nodes[1];
//
//    cout << l.pare_min()[0]<<endl;
}
/*
 сделать возвращение минимальных пар
 создание узла и false для потомков
 объединять пока количество true >= 1
 */