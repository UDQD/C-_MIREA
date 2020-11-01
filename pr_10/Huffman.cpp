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

}


void Huffman::compress() {

}

void Huffman::get_code() {}