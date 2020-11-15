#include "Stack.h"
#include <iostream>

void menu(Stack stack) {
	cout << "Выберите команду:" << endl;
	cout << "[1] - Добавить элемент." << endl;
	cout << "[2] - Вывести верхний элемент (без удаления)." << endl;
	cout << "[3] - Вывести верхний элемент (с удалением)." << endl;
	cout << "[4] - Вывести стек на экран." << endl;
	cout << "[5] - Проверить пустой ли стек." << endl;
	cout << "[6] - Вывести длинну стека." << endl;
	cout << "[7] - Завершить программу." << endl;
	cout << "----> ";
	int ch = 0;
	cin >> ch;
	if (ch == 1) {
		int new_num = 0;
		cout << "Введите число: ";
		cin >> new_num;
		stack.add(new_num);
		cout << "Элемент "<<new_num<<" добавлен." << endl;
		menu(stack);
	}
	else if(ch == 2)
	{
		cout<<stack.peek()<<endl;
		menu(stack);
	}
	else if (ch == 3)
	{
		cout << stack.pop() << endl;
		menu(stack);
	}
	else if (ch == 4)
	{
		stack.show();
		menu(stack);
	}
	else if (ch == 5)
	{
		cout << stack.not_empty()<<endl;
		menu(stack);
	}
	else if (ch == 6)
	{
		cout<<stack.len()<<endl;
		menu(stack);
	}
	else if (ch == 7)
	{
		cout << "Программа завершена.";
		return;
	}

	

}


int main()
{
	setlocale(LC_ALL, "Russian");
	Stack *st = new Stack;
	menu(*st);

}


