#include "Table.h"
void menu(Table table) {
	cout << "Выберите команду:" << endl;
	cout << "[1] - Добавить счет." << endl;
	cout << "[2] - Удалить счет." << endl;
	cout << "[3] - Найти счет по владельцу." << endl;
	cout << "[4] - Вывести тыблицу." << endl;
	cout << "[5] - Завершить программу." << endl;
	cout << "---->";
	int ch = 0;
	cin >> ch;
	if (ch == 1) {
		cout << "Введите номер счета, имя владельца и адресс через пробелы" << endl;
		string num, name, address;
		cin >> num >> name >> address;
		table.add_cell(num, name, address);
		menu(table);
	}
	else if (ch == 2) {
		cout << "Введите имя владельца счета" << endl;
		string name;
		cin >> name;
		table.delete_cell(name);
		menu(table);
	}

	else if (ch == 3) {
		cout << "Введите имя владельца счета" << endl;
		string name;
		cin >> name;
		table.find_cell(name);
		menu(table);
	}
	else if (ch == 4) {
		table.show_table();
		menu(table);
	}
	else if (ch == 5) {
		cout << "Программа завершена" << endl;
	}

}
int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Введите размер таблицы" << endl;
	cin >> size;
	Table table(size);
	menu(table);
}
	
