#include <limits>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include "GraphElements.h"
#include "Graph.h"
#include "Yen.h"

using namespace std;

void testYenAlg()
{
	Graph my_graph("yen_8.txt");

	Yen yenAlg(my_graph, my_graph.get_vertex(0),
		my_graph.get_vertex(7));

	int i = 0;
	while (yenAlg.has_next())
	{
		++i;
		yenAlg.next()->PrintOut(cout);
	}
}

void menu() {
	int choice = 0, count = 0, heights = 0;
	int v1 = 0, v2 = 0, weigth = 0;
	bool flag = true;
	string line = "", str = "";
	while (flag == true) {
		cout << "\n[1] - Добавить элемент в граф\n[2] - Вывод дерева в виде таблицы(Вершина-начало | Вершина-конец | вес ребра)\n[3] - Вывод K-кратчайших путей во взвешенном графе\n[0] - Выход из программы\n\nВведите номер команды: ";
		cin >> choice;
		if (choice == 1) {
			std::ofstream f;
			f.open("yen_8.txt", std::ios::app);
			cout << endl << "Это первое использование команды [1]?" << endl << endl << setw(20) << "1 - Да, 2 - Нет" << endl << endl << "Введите команду: ";
			cin >> choice;
			if (choice == 1) {
				cout << "Введите кол-во вершин: ";
				cin >> heights;
				f << heights << endl;
			}
			else if (choice == 2) {
				cout << endl;
				cout << "Введите номер начальной вершины: ";
				cin >> v1;
				cout << "Введите номер конечной вершины: ";
				cin >> v2;
				cout << "Введите вес ребра между вершинами: ";
				cin >> weigth;
				f << endl << v1 << "	" << v2 << "	" << weigth << "	";
			}
			f.close();
			cout << endl;
		}
		else if (choice == 2) {
			cout << endl;
			ifstream fin;
			fin.open("yen_8.txt");
			while (!fin.eof()) {
				if (count == 0) {
					cout << "Кол-во вершин в графе:";
					count++;
				}
				else if (count == 1) {
					cout << "____________________" << endl;
					cout << "|начало| конец |вес|" << endl;
					count++;
				}
				getline(fin, str);
				cout << "|" << str << " |" << endl;
			}
			cout << "--------------------" << endl;
			fin.close();
			cout << endl;
		}
		else if (choice == 3) {
			testYenAlg();
			cout << endl;
		}
		else if (choice == 0) {
			cout << endl;
			cout << "Вы действительно хотите выйти из программы?\n1 - Да | 2 - Нет\nВведите выбранную команду: ";
			cin >> choice;
			if (choice == 1)
			{
				cout << endl;
				flag = false;
			}
			else if (choice == 2)
			{
				flag = true;
				cout << endl;
			}
		}
	}
}

int main(...)
{
	setlocale(0, "");
	cout << "Программа нахождения K - кратчайших путей во взвешенном графе" << endl;
	menu();
}