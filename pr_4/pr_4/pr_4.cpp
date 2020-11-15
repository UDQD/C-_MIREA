#include "Lds.h"

void menu(Lds lds) {
	cout << "Выберите команду:" << endl;
	cout << "[1] - Добавить элемент." << endl;
    cout << "[2] - Удалить последний элемент." << endl;
    cout << "[3] - Удалить элемент по значению." << endl;
    cout << "[4] - Длинна списка." << endl;
    cout << "[5] - Вывести список." << endl;
    cout << "[6] - Проверить наличие элемента в списке." << endl;
    cout << "[7] - Завершить программу." << endl;
	cout << "----> ";
	int ch = 0;
	cin >> ch;
	if (ch == 1) {
        int el = 0;
        cout << "Введите элемент:";
        cin >> el;
        lds.add(el);
        cout << "Элемент "<<el<<" был добавлен в вписок." << endl;
		menu(lds);
	}
	else if (ch == 2)
	{
        lds.del_last();
        cout << "Последний элемент был удален" << endl;
		menu(lds);
	}
    else if (ch == 3)
    {

        int el = 0;
        cout << "Введите элемент:";
        cin >> el;
        lds.del(el);
        cout << "Элемент " << el << " был удален из списка." << endl;
        menu(lds);
    }
    else if (ch == 4)
    {
        cout << "Длинна списка = "<<lds.len()<<endl;
        menu(lds);
    }
    else if (ch == 5)
    {
        lds.show();
        menu(lds);
    }
    else if (ch == 6)
    {
        int el = 0;
        cout << "Введите элемент:";
        cin >> el;
        cout << lds.in_lds(el) << endl;
        menu(lds);
    }
    else if (ch == 7)
    {

        return;
    }
	
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Lds * lds = new Lds;
    menu(* lds);  
}


