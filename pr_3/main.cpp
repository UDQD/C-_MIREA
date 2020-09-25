#include <iostream>
#include "string"
using namespace std;




template<typename T>
class Table {

public:
    struct Node{
        T x;
        int delta = 0;
    };
    int n;
    Node* m[];

    Table(int an) {*m = new Node[an];n=an;}

    int hash(T x){
        string s = to_string(x);
        int rez = 0;
        for(int i = 0;i<s.length();i++){
            rez+=s[i];
        }
        return rez%n;
    }
    void add(T x){
        Node *temp = new Node;
        temp->x = x;
        temp->delta = srh_free(hash(x));
        m[hash(x)+temp->delta] = temp;
    }
    int srh_free(int ind){
        int count = 0;
        for(int i = ind;i<n;i++){
            if(m[ind]!=NULL) count++;
        }
        return count;
    }
    void show_Table(){
        for(int i = 0;i<n;i++){
            cout<<m[i]<<endl;
        }
    }

};



int main() {
    Table<string> Table1(10);
    Table1.add("sasdfdasd");
}
