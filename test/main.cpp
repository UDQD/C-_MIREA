#include <iostream>
#include <map>
#include <windows.h>
using namespace std;
map<char, double> note{
        {'C', 32.703}, {'D', 36.708}, {'E', 41.203}, // До, Ре, Ми
        {'F', 43.654}, {'G', 48.999}, {'A', 55.}, // Фа, Соль, Ля
        {'H', 61.735} }; // Си

const int duration{ 400 }; // миллисекунд
const int octave{ 12 }; // октава

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    system(chcp 65001);
    cout << "deleting..." << endl;
    Beep(250, 250);
    cout << "deleting..." << endl;
    Beep(250, 250);
    cout << "deleting..." << endl;
    Beep(250, 250);
    cout << "deleting..." << endl;
    Beep(250, 250);
    cout << "Windows был удален! " << endl;
    Beep(0, 2000);
    cout << "======>  Наебал    :D"<<endl;
    while (1) {

        Beep(note['D'] * octave, 512);
        cout << "                               " << endl;
        cout << "          ####                    " << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;
        cout << "								" << endl;



        Beep(note['D'] * octave, 256);
        Beep(note['A'] * octave, 256);
        Beep(note['G'] * octave, 512);
        Beep(note['F'] * octave, 512);
        Beep(note['E'] * octave, 512);
        Beep(note['E'] * octave, 256);
        Beep(note['E'] * octave, 256);
        Beep(note['G'] * octave, 512);
        Beep(note['F'] * octave, 256);
        Beep(note['E'] * octave, 256);
        Beep(note['D'] * octave, 512);
        Beep(note['D'] * octave, 256);
        Beep(note['F'] * 2*octave, 256);
        Beep(note['E'] * 2 * octave, 256);
        Beep(note['F'] * 2 * octave, 256);
        Beep(note['E'] * 2 * octave, 256);
        Beep(note['F'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 512);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['F'] * 2 * octave, 256);
        Beep(note['E'] * 2 * octave, 256);
        Beep(note['F'] * 2 * octave, 256);
        Beep(note['E'] * 2 * octave, 256);
        Beep(note['F'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 512);
        Beep(note['D'] * 2 * octave, 512);
        Beep(note['F'] * octave, 256);
        Beep(note['F'] * octave, 256);
        Beep(note['F'] * octave, 256);
        Beep(note['F'] * octave, 256);
        Beep(note['A'] * octave, 256);
        Beep(note['A'] * octave, 256);
        Beep(note['A'] * octave, 256);
        Beep(note['A'] * octave, 256);
        Beep(note['G'] * octave, 256);
        Beep(note['G'] * octave, 256);
        Beep(note['G'] * octave, 256);
        Beep(note['G'] * octave, 256);
        Beep(note['C'] * 2 * octave, 256);
        Beep(note['C'] * 2 * octave, 256);
        Beep(note['C'] * 2 * octave, 256);
        Beep(note['C'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['D'] * 2 * octave, 256);
        Beep(note['G'] * octave, 256);
        Beep(note['F'] * octave, 256);
        Beep(note['E'] * octave, 256);
        Beep(note['C'] * octave, 256);

    }
}