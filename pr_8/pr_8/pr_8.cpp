#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void file_update();
struct product{
    string id;
    string name;
    string price;
};
vector<product> list;

void read_file() {
    list.clear();
    string str;
    ifstream fin;
    fin.open("file_1", ios::binary);
    if (fin.is_open()) {
        while (getline(fin, str))
        {
            vector<string> arr;
            size_t next;
            string delim = ",";
            size_t prev = 0;
            size_t delta = delim.length();
            while ((next = str.find(delim, prev)) != string::npos) {
                string tmp = str.substr(prev, next - prev);
                arr.push_back(str.substr(prev, next - prev));
                prev = next + delta;
            }
            string tmp = str.substr(prev);
            arr.push_back(str.substr(prev));
            product* temp = new product;
            temp->id = arr[0];
            temp->name = arr[1];
            temp->price = arr[2];
            list.push_back(*temp);
        }
    }
}

void add_in_file(string s) {
    ofstream fout;
    fout.open("file_1", ios::app, ios::binary);
    if (!fout.is_open()) cout << "error" << endl;
    else {
        fout << s << endl;

    }
    fout.close();
}

int search_in_list_id(string id_par) {
    for (int i = 0; i < list.size(); i++) {
        if (list[i].id == id_par) {
            return i;
        }
    }
    return -1;
}

int search_in_list_part_id(string id_part) {
    for (int i = 0; i < list.size(); i++) {
        bool t = true;
        for (int j = 0; j < id_part.length(); j++) {
            if (list[i].id[j] != id_part[j]) {
                t = false;
                break;
            }
        }
        if (t)   return i;
    }
    return -1;
}

void del_elems_part_id(string id_part) {
    int del_id = search_in_list_part_id(id_part);
    int counter = 0;
    while (del_id != -1) {
        list.erase(list.begin() + del_id);
        del_id = search_in_list_part_id(id_part);
        counter++;
    }
    file_update();
    cout << "Удалено товаров: " << counter <<  endl;
}

void change_elem_id(string id, string new_data, string fields) {
    int change_id = search_in_list_part_id(id);


    if(fields == "name"){
        list[change_id].name = new_data;
    }
    if (fields == "price") {
        list[change_id].price = new_data;
    }
        
    file_update();
    //cout << "Товар изменен " << endl;
}

void file_update() {
    ofstream fout;
    fout.open("file_1", ios::binary);
    if (!fout.is_open()) cout << "error" << endl;
    else {
        for (int i = 0; i < list.size(); i++) {
            fout << list[i].id+","+ list[i].name + "," + list[i].price<<endl;
        }

    }
    fout.close();

}

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream fout;
    fout.open("file_1", ios::binary);
    if (!fout.is_open()) cout << "error" << endl;
    else {
        fout << "";

    }
    fout.close();

    add_in_file("123,kkfwf,234");
    add_in_file("1123123,wejkkkfwf,4434");
    add_in_file("13543,wefdffeff,234444");
    //read_file();
    
    //cout << list.size()<<endl;
    add_in_file("13245,wefhghhff,23444400");
    read_file();
    //cout << search_in_list_id("13245");
    //del_elems_part_id("13");
    change_elem_id("123", "aaaaaaa", "name");
//    cout << list.size();
}
