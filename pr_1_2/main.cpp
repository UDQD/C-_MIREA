#include <iostream>
using namespace std;
#include "Queue.h"
#include <windows.h>

bool mux(string x){
    if (x == "*" || x == "/") return true;
    else return false;
}

void show_2_3_4(Queue lst){
    if(lst.len() == 4){
        string* s = new string[4];
        s[0] = lst.Show();
        lst.del();

        s[1] = lst.Show();
        lst.del();

        s[2] = lst.Show();
        lst.del();

        s[3] = lst.Show();
        lst.del();
        if(mux(s[0]) && !mux(s[1])) cout << (s[0]+"("+s[2]+s[1]+s[3]+")");
        else cout << (s[0]+s[2]+s[1]+s[3]);
    }
    if(lst.len() == 3){
        string* s = new string[3];
        s[0] = lst.Show();
        lst.del();

        s[1] = lst.Show();
        lst.del();

        s[2] = lst.Show();
        lst.del();
        if (mux(s[0]))  cout<<(s[1]+s[0]+s[2]);
        else cout<<("("+s[1]+s[0]+s[2]+")");
    }
    if(lst.len() == 2){
        cout<<lst.Show();
        lst.del();

        cout<<lst.Show();
        lst.del();

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
    }else{
        show_2_3_4(lst);







    }


}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Queue lst;
    menu(lst);
}
//    for(int i=0;i<s.length();i++){
//        string c;
//        c.push_back(s[i]);
//        lst.Add_elem(c);
//    }
    //очередь заполнена

//    Queue let;
//    Queue znk;
//
//    for(int i=0;i<s.length();i++){
//        string c;
//        c.push_back(s[i]);
//        if (c=="+"||c=="-"||c=="*"||c=="/"){
//            znk.Add_elem(c);
//        }else{
//            let.Add_elem(c);
//        }
//    }
//
//
//cout<<znk.len();