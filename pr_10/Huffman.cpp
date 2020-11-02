#include "Huffman.h"

#include <string>

void Huffman::set_string(string s) {
    name = s;
    for (int i = 0; i < name.length(); i++) {
        if (los.find_ell(name[i]) == NULL) {
            los.add_ell(name[i]);
        } else {
            los.inc_ell(los.find_ell(name[i]));
        }
    }

}

void Huffman::make_tree() {
    tree = los;
    while (tree.count_true() > 1) {
        int number_of_true = tree.count_true();

        int id_1 = tree.pare_min()[0];
        int id_2 = tree.pare_min()[1];
        Node *new_node = new Node;
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

    for (int i = 0; i < name.length(); i++) {
        string simb_code = "";
        Node *temp = tree.find_ell(name[i]);
        while (temp->binar_code != -1) {
            simb_code += to_string(temp->binar_code);
            temp = temp->next_layer;
        }
        string out = "";
        for (int i = simb_code.length() - 1; i >= 0; i--)
            out += simb_code[i];
        code += out;
    }


}

string Huffman::get_code() {
    return code;
}

