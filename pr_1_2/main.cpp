#include <iostream>
using namespace std;
#include "Queue.h"


void menu(Queue lst) {


    cout << "1 - add elem " << endl;
    cout << "2 - remove elem " << endl;
    cout << "3 - show first elem " << endl;
    cout << "4 - is queue empty " << endl;
    cout<<": ";
    //cout << "5" << endl;
    int inp;
    cin >> inp;

    if (inp == 1) {
        cout << "write string: \n";
        string inp2;
        cin >> inp2;
        lst.Add_elem(inp2);
        menu(lst);
    } else if (inp == 2) {
        lst.del();
        menu(lst);

    } else if (inp == 3) {
        lst.Show();
        menu(lst);
    } else if (inp == 4) {
        lst.isempty();
        menu(lst);
    }
}

int main()
{
    Queue lst;
    menu(lst);
//    string s;
//    cin>>s;


}