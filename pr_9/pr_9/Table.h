#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
struct Cell {
	string num = "-";
	string name = "-";
	string address = "-";
};
class Table
{
private:

	Cell* table;
	int len;
public:
	Table(int size);
	int get_hash_code(string s);
	void find_cell(string s);
	void add_cell(string num, string name, string adress);
	void show_table();
	void delete_cell(string s);
};

