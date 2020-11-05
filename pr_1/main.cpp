#include "Los.h"

void menu(Los los){
    bool work = true;
    while(work) {
        int x = 0;
        int a = 0;
        cout<<"==================================================================="<<endl;
        cout << "1 - add element" << endl;
        cout << "2 - add element after another elem." << endl;
        cout << "3 - delete element" << endl;
        cout << "4 - show length of LOS" << endl;
        cout << "5 - show LOS" << endl;
        cout << "6 - end the program" << endl;
        cout << "chose command: ";
        int ch;
        cin >> ch;
        cout<<endl;
        cin.ignore();
        switch (ch) {
            case 1:
                cout << "write number: ";
                cin >> x;
                cout<<endl;
//                cin.ignore();
                los.add_ell(x);
                break;
            case 2:
                cout << "write number: ";
                cin >> x;
                cout<<endl;
//                cin.ignore();
                cout << "write target number: ";
                cin >> a;
                cout<<endl;
//                cin.ignore();
                los.add_ell(x, a);
                break;
            case 3:
                cout << "write number: ";
                cin >> x;
                cout<<endl;
//                cin.ignore();
                cout<<endl;
                los.del_ell(x);
                break;
            case 4:
                cout << los.len_los() << endl;
                break;
            case 5:
                los.out_los();
                break;
            case 6:
                work = false;
                break;
        }
    }
}

int main() {
    Los los;
    menu(los);




}
