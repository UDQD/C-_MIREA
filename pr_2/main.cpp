#include <iostream>

using namespace std;

struct Node {
    int x;
    Node *More = NULL;
    Node *Less = NULL;
};

class Tree {
    Node *More, *Less;

public:
    bool is_empty;
    Node *Head;

    Tree() : More(NULL), Less(NULL) { is_empty = true; };

    void add(int x);

    void forward();

    void simetr();

    void out_el_for(Node N);

    void out_el_sim(Node N);

    void chek(int x);

    int heigh(Node N);
};

void Tree::add(int x) {
    Node *temp = new Node;
    if (is_empty) {
        temp->x = x;
        temp->Less = NULL;
        temp->More = NULL;
        Head = temp;
        is_empty = false;

    } else {
        temp = Head;
        Node *next = new Node;
        while (true) {
            if (x > temp->x) {
                if (temp->More != NULL) {
                    temp = temp->More;
//                    break;
                } else {
                    temp->More = new Node;
                    temp->More->x = x;
                    break;
                }
            } else if (x < temp->x) {
                if (temp->Less != NULL) {
                    temp = temp->Less;
//                    break;
                } else {
                    temp->Less = new Node;
                    temp->Less->x = x;
                    break;
                }
            } else {
                cout << "This item already exists" << endl;
                break;
            }
        }
    }
}

void Tree::chek(int x) {
    int c = 0;
    Node *temp = new Node;
    if (is_empty) {
        cout<<"item is absent "<<endl;

    } else {
        temp = Head;
//        Node *next = new Node;
        while (true) {
            if (x > temp->x) {
                if (temp->More != NULL) {
                    temp = temp->More;
                    c++;
//                    break;
                } else {
//                    temp->More = new Node;
//                    temp->More->x = x;
                    cout<<"item is absent "<<endl;
                    break;
                }
            } else if (x < temp->x) {
                if (temp->Less != NULL) {
                    temp = temp->Less;
                    c++;
//                    break;
                } else {
//                    temp->Less = new Node;
//                    temp->Less->x = x;
                    cout<<"item is absent "<<endl;
                    break;
                }
            } else {
                cout << "range = "<< c << endl;
                break;
            }
        }

    }
}


void Tree::forward() {
    out_el_for(*Head);
}

void Tree::out_el_for(Node N) {
    cout << N.x << endl;
    if (N.Less != NULL) {
        this->out_el_for(*N.Less);
    }
    if (N.More != NULL) {
        this->out_el_for(*N.More);
    }

}

void Tree::simetr() {
    out_el_sim(*Head);
}

void Tree::out_el_sim(Node N) {

    if (N.Less != NULL) {
        this->out_el_sim(*N.Less);
    }
    cout << N.x << endl;
    if (N.More != NULL) {
        this->out_el_sim(*N.More);
    }

}

int max(int a, int b){
    if(a>=b) return a;
    else return b;
}

int Tree::heigh(Node N){
    if(N.More == NULL&&N.Less == NULL)  return 0;
    if(N.More == NULL&&N.Less != NULL)  return 1+ this->heigh(*N.Less);
    if(N.More != NULL&&N.Less == NULL)  return 1+ this->heigh(*N.More);
    if(N.More != NULL&&N.Less != NULL)  return 1+max(this->heigh(*N.Less),this->heigh(*N.More));

}

void menu(Tree tree){

}

int main() {
//    Tree a;
//    a.add(14);
//    a.add(12);
//    a.add(69);
//    a.add(52);
//    a.add(55);
//    a.add(27);
//    a.add(5);
//    a.add(37);
//    a.add(70);
//    a.add(3);
//    a.simetr();
//    a.chek(337);
//    cout<<a.heigh(*a.Head)<<endl;
//    cout << "success" << endl;

}

