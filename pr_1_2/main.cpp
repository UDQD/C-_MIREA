#include <iostream>

using namespace std;

#include "Queue.h"
#include <windows.h>
#include <string>

void act(Queue lst);

bool mux(string x) {
    if (x == "*" || x == "/") return true;
    else return false;
}

bool sign(string x) {
    if (x == "+" || x == "-" || x == "*" || x == "/") return true;
    else return false;
}

void out_str(string x[3]) {

    if (!mux(x[2])) {
        cout << ("(" + x[0] + x[2] + x[1] + ")");
    } else {
        cout << (x[0] + x[2] + x[1]);
    }
}


void show_2_3_4(Queue lst) {
    if (lst.len() == 4) {
        string *s = new string[4];
        s[0] = lst.Show();
        lst.del();

        s[1] = lst.Show();
        lst.del();

        s[2] = lst.Show();
        lst.del();

        s[3] = lst.Show();
        lst.del();
        if (mux(s[0]) && !mux(s[1])) cout << (s[0] + "(" + s[2] + s[1] + s[3] + ")");
        else cout << (s[0] + s[2] + s[1] + s[3]);
    } else if (lst.len() == 3) {
        string *s = new string[3];
        s[0] = lst.Show();
        lst.del();

        s[1] = lst.Show();
        lst.del();

        s[2] = lst.Show();
        lst.del();
        if (mux(s[0])) cout << (s[1] + s[0] + s[2]);
        else cout << ("(" + s[1] + s[0] + s[2] + ")");
    } else if (lst.len() == 2) {
        string *s = new string[2];
        s[0] = lst.Show();
        lst.del();

        s[1] = lst.Show();
        lst.del();
        cout << (s[0] + s[1]);

    }
}

void act2(Queue lst, string *buf, Queue lst_2) {

    if (!sign(buf[0]) && !sign(buf[1]) && sign(buf[2])) {
        out_str(buf);
        if (lst.len() >= 3) {
            for (int i = 0; i < 3; i++) {
                buf[2 - i] = lst.Show();
                lst.del();
            }
            act2(lst, buf, lst_2);

        } else {
            int ln = lst.len();
            for (int i = 0; i < ln; i++) {

                string t = lst.Show();

                lst.del();

                lst_2.Add_elem(t);

            }
            act(lst_2);
        }

    } else {
        if (lst.len() >= 1) {
            lst_2.Add_elem(buf[2]);
            buf[2] = buf[1];
            buf[1] = buf[0];
            buf[0] = lst.Show();
            lst.del();
            act2(lst, buf, lst_2);
        } else {
            lst_2.Add_elem(buf[2]);
            lst_2.Add_elem(buf[1]);
            lst_2.Add_elem(buf[0]);
            act(lst_2);
        }
    }

    for (int i = 0; i < 3; i++) {

    }

}


void act(Queue lst) {
    Queue lst_2;
    string buf[3] = {"", "", ""};
    if (lst.len() <= 4) show_2_3_4(lst);
    else {
        for (int i = 0; i < 3; i++) {
            buf[2 - i] = lst.Show();
            lst.del();
        }
        act2(lst, buf, lst_2);

    }

}

void menu(Queue lst) {

    cout << "1 - add elem " << endl;
    cout << "2 - show " << endl;

    int inp;
    cin >> inp;

    if (inp == 1) {
        cout << "write string: \n";
        string inp2;
        cin >> inp2;
        lst.Add_elem(inp2);
        menu(lst);
    } else {
        act(lst);
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Queue lst;
    menu(lst);
}
