#include "Huffman.h"
#include <list>
void Huffman::set_string(string s) {
    name = s;
    for(int i = 0;i<name.length();i++){
        if(los.find_ell(name[i])==NULL){
            los.add_ell(name[i]);
        }else{
            los.inc_ell(los.find_ell(name[i]));
        }
    }

}

void Huffman::make_tree() {
    tree = los;
    while(tree.count_true()>1){
        int number_of_true = tree.count_true();
//        Node* temp_nodes;
//        Node min_nodes[2];
//        temp_nodes = tree.pare_min();
//        min_nodes[0] = temp_nodes[0];
//        min_nodes[1] = temp_nodes[1];
//        char c1 = min_nodes[0].simb;
//        char c2 = min_nodes[1].simb;
        int id_1 = tree.pare_min()[0];
        int id_2 = tree.pare_min()[1];
        Node* new_node = new Node;
        new_node->id = tree.get_id();
        tree.inc_id();
        tree.find_ell(id_1)->next_layer = new_node;
        tree.find_ell(id_2)->next_layer = new_node;
        tree.find_ell(id_1)->is_last_layer = false;
        tree.find_ell(id_2)->is_last_layer = false;
        tree.find_ell(id_1)->binar_code = 0;
        tree.find_ell(id_2)->binar_code = 1;
        new_node->number = tree.find_ell(id_1)->number + tree.find_ell(id_2)->number;
        tree.add_ell(new_node);

    }
}


void Huffman::compress() {

}

void Huffman::get_code() {}