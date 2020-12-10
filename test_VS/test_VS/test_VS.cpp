#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b; //вводим 2 числа через пробел
    if (a > b) {
        cout << "a>b ";
        cout << a; //выводим "а", если a>b
    }
    else {
        cout << a << " " << b; //иначе выводи оба числа через пробел
    }
}
