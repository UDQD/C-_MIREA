#include <iostream>
using namespace std;
#include "Queue.h"
#include <windows.h>



//void menu(Queue lst) {
//
//
//    cout << "1 - add elem " << endl;
//    cout << "2 - remove elem " << endl;
//    cout << "3 - show first elem " << endl;
//    cout << "4 - is queue empty " << endl;
//    cout<<": ";
//    //cout << "5" << endl;
//    int inp;
//    cin >> inp;
//
//    if (inp == 1) {
//        cout << "write string: \n";
//        string inp2;
//        cin >> inp2;
//        lst.Add_elem(inp2);
//        menu(lst);
//    } else if (inp == 2) {
//        lst.del();
//        menu(lst);
//
//    } else if (inp == 3) {
//        lst.Show();
//        menu(lst);
//    } else if (inp == 4) {
//        lst.isempty();
//        menu(lst);
//    }
//}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Queue lst;
//    menu(lst);
    string s;
    cin>>s;
//    for(int i=0;i<s.length();i++){
//        string c;
//        c.push_back(s[i]);
//        lst.Add_elem(c);
//    }
    //очередь заполнена

    Queue let;
    Queue znk;

    for(int i=0;i<s.length();i++){
        string c;
        c.push_back(s[i]);
        if (c=="+"||c=="-"||c=="*"||c=="/"){
            znk.Add_elem(c);
        }else{
            let.Add_elem(c);
        }
    }




}