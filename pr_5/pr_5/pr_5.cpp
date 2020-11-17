#include "Deque.h"
#include <string>
void menu(Deque dec) {
	//cin.clear();
	cin.ignore();
	cout << "Выберите команду:" << endl;
	cout << "[1] - Добавить элемент." << endl;
	cout << "[2] - Вывести элемент. (с удалением)" << endl;
	cout << "[3] - Вывести элемент. (без удаления)" << endl;
	cout << "[4] - Вывести длинну дека." << endl;
	cout << "[5] - Вывести дек." << endl;
	cout << "[6] - Завершить программу." << endl;
	cout << "---->";
	int ch = 0;
	cin >> ch;
	//getline(cin, ch);
	
	//cin.clear();
	//cin.ignore();
	if (ch == 1) {
		cout << "____[1] - Добавить слева." << endl;
		cout << "____[2] - Добавить справа." << endl;
		cout << "____[3] - Назад." << endl;
		cout << "-------->";
		int ch2 = 0;
		/*cin.ignore();*/
		//cin.clear();
		cin >> ch2;
		//getline(cin, ch2);
		//cin.clear();
		//cin.ignore();
		//cin.clear();
		//cin.ignore();
		if (ch2 == 1) {
			int x = 0;
			cout << "Введите число." << endl;
			cout << "-------->";
			cin >> x;
			dec.add_left(x);
			menu(dec);
		}
		else if (ch2 == 2) {
			int x = 0;
			cout << "Введите число." << endl;
			cout << "-------->";
			cin >> x;
			dec.add_right(x);
			menu(dec);
		}
		else if (ch2 == 3) {
			menu(dec);
		}
		
	}
	else if (ch == 2)
	{
		cout << "____[1] - Вывести слева." << endl;
		cout << "____[2] - Вывести справа." << endl;
		cout << "____[3] - Назад." << endl;
		cout << "-------->";
		int ch2 = 0;
		cin >> ch2;
		//getline(cin, ch2);
		//cin.clear();
		//cin.ignore();
		if (ch2 == 1) {
			cout <<	dec.pop_left()<<endl;
			menu(dec);
		}
		else if (ch2 == 2) {
			cout << dec.pop_right() << endl;
			menu(dec);
		}
		else if (ch2 == 3) {
			menu(dec);
		}
	}
	else if (ch == 3)
	{
		cout << "____[1] - Вывести слева." << endl;
		cout << "____[2] - Вывести справа." << endl;
		cout << "____[3] - Назад." << endl;
		cout << "-------->";
		int ch2 = 0;
		cin >> ch2;
		//getline(cin, ch2);
		//cin.clear();
		//cin.ignore();
		if (ch2 == 1) {
			cout << dec.peek_left() << endl;
			menu(dec);
		}
		else if (ch2 == 2) {
			cout << dec.peek_right() << endl;
			menu(dec);
		}
		else if (ch2 == 3) {
			menu(dec);
		}
	}
	else if (ch == 4)
	{
		cout << dec.len() << endl;
		menu(dec);
	}
	else if (ch == 5)
	{
		dec.show();
		menu(dec);
	}
	else if (ch == 6)
	{
		return;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Deque deque;
	menu(deque);
}


