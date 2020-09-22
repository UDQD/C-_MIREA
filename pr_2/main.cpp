#include <iostream>
using namespace std;

struct Node
{
    int x;
    Node* More;
    Node* Less;
};
class Tree{
    Node *More, *Less;

public:
    bool is_empty;
    Node* Head;
    Tree(): More(NULL), Less(NULL){is_empty=true;};
    void add(int x);
};
void Tree::add(int x) {
    Node* temp = new Node;
    if(is_empty){
        temp->x = x;
        temp->Less = NULL;
        temp->More = NULL;
        Head=temp;
        is_empty = false;
    }else{
        temp=Head;
        Node* next = new Node;
        while(true){
            if(x>temp->x){
                if(temp->More!=NULL){
                    temp=More;
                }else{
                    temp->More = new Node;
                    temp->More->x = x;
                    break;
                }
            }else if(x<temp->x){
                if(temp->Less!=NULL){
                    temp=Less;
                }else{
                    temp->Less = new Node;
                    temp->Less->x = x;
                    break;
                }
            }else{
                cout<<"This item already exists"<<endl;
                break;
            }
        }
    }
}

int main() {
Tree a;
a.add(8);
a.add(5);
a.add(9);
//a.add(8);
cout<<"success"<<endl;

}

