#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
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
    read_file();
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

void change_elem_id(string id, string new_data, int fields) {
    int change_id = search_in_list_part_id(id);


    if(fields == 0){
        list[change_id].name = new_data;
        //cout << "------------------name" << endl;
    }
    if (fields == 1) {
        list[change_id].price = new_data;
        //cout << "------------------price" << endl;
    }
    //cout << "------------------nothing" << endl;
    file_update();
    //cout << "Товар изменен " << endl;
}

void change_elems(vector<string> vec, string new_data, int fields) {
    for (int i = 0; i < vec.size(); i++) {
        change_elem_id(vec[i], new_data, fields);
    }
    cout << "Элементов изменено: " << vec.size() << endl;
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

void out_list() {
    cout << "№" << setw(15) << "КОД" << setw(15) << "НАЗВАНИЕ" << setw(15) << "ЦЕНА" << endl;
    for (int i = 0; i < list.size(); i++) {
        cout <<i+1<<setw(15)<< list[i].id << setw(15) << list[i].name << setw(15) << list[i].price;
        cout << endl;
    }
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

    //read_file();
    while (true) {
        cout << "Выберите команду:" << endl;
        cout << "[1] - Добавить товар." << endl;
        cout << "[2] - Удалить товары по началу ключа." << endl;
        cout << "[3] - Изменить несколько товаров." << endl;
        cout << "[4] - Вывести список товаров." << endl;
        cout << "[5] - Завершить программу." << endl;
        cout << "---->";
        int ch = 0;
        cin >> ch;
        if (ch == 1) {
            cout << "____Введите НОМЕР, НАЗВАНИЕ и ЦЕНУ товара через запятые без пробелов" << endl;
            cout << "-------->";
            string new_str;
            cin >> new_str;
            add_in_file(new_str);
            continue;
        }
        if (ch == 2) {
            cout << "____Введите начало ключа" << endl;
            cout << "-------->";
            string new_key;
            cin >> new_key;
            del_elems_part_id(new_key);
            continue;
        }
        if (ch == 3) {
            cout << "Введите через пробел номера товаров (0 для завершения)" << endl;
            cout << "-------->";
            string new_id = "";
            vector<string> ids;
            cin >> new_id;
            while (new_id != "0") {
                ids.push_back(new_id);
                cin >> new_id;
            }
            cout << "Введите новые данные и название поля для вставки" << endl;
            cout << "-------->";
            string data;
            int field;
            cin >> data >> field;
            change_elems(ids, data, field);
            continue;
        }
        if (ch == 4) {
            out_list();
            continue;

        }
        if (ch == 5) {
            break;
        }
    }
}
