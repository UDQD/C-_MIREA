#include "Table.h"
Table::Table(int size) {
	len = size;
	table = new Cell[size];
}

int Table::get_hash_code(string s) {
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i]*s[i];
	}
	return sum % len;
}

void Table::add_cell(string num, string name, string address) {
	Cell* temp_cell = new Cell;
	temp_cell->num = num;
	temp_cell->address = address;
	temp_cell->name = name;

	int new_hash = get_hash_code(name);
	for (int i = 0; i < len; i++) {
		if (table[new_hash + i % len].name == "-") {
			table[new_hash + i % len] = *temp_cell;

			break;
		}
		if (i == len - 1)	cout << "—вободных €чеек больше нет" << endl;
	}
}

void Table::show_table() {
	int spase = 15;
	cout << setw(spase) << "є €чейки" << setw(spase)
		<< "Ќомер счета" << setw(spase) 
		<< "»м€" << setw(spase)
		<< "јдресс" << endl;
	for (int i = 0; i < len; i++) {
		cout << setw(spase) <<i<<setw(spase)
			<< table[i].num << setw(spase)
			<< table[i].name << setw(spase)
			<< table[i].address << endl;
	}
}

void Table::find_cell(string s) {
	int spase = 15;
	int new_hash = get_hash_code(s);
	for (int i = 0; i < len; i++) {
		if (table[new_hash + i % len].name == s) {
			cout << setw(spase) << "є €чейки" << setw(spase)
				<< "Ќомер счета" << setw(spase)
				<< "»м€" << setw(spase)
				<< "јдресс" << endl;
			cout << setw(spase) << new_hash + i % len << setw(spase)
				<< table[new_hash + i % len].num << setw(spase)
				<< table[new_hash + i % len].name << setw(spase)
				<< table[new_hash + i % len].address << endl;

			break;
		}
		if (i == len - 1)	cout << "—чет не найден" << endl;
	}
	

}

void Table::delete_cell(string s) {

	int new_hash = get_hash_code(s);
	for (int i = 0; i < len; i++) {
		if (table[new_hash + i % len].name == s) {
			table[new_hash + i % len].num = "-";
			table[new_hash + i % len].name = "-";
			table[new_hash + i % len].address = "-";
			break;
		}
		if (i == len - 1)	cout << "—чет не найден" << endl;
	}
	
}
