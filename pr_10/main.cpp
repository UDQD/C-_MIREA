#include <iostream>
#include "Huffman.h"
#include <string>


int main() {

    int choice = 1;
    while (choice) {
        Huffman a;
        cout << "input string: " << endl;
        string inp_str = "";
        getline(cin, inp_str);
        cin.clear();
        a.set_string(inp_str);
        a.make_tree();
        a.compress();
        cout << a.get_code() << endl;
        cout << "1 - new string" << endl;
        cout << "0 - exit" << endl;
        cin >> choice;
        cin.ignore();


    }
    cout << "Programm finished" << endl;


}
