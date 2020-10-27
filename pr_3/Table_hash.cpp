//
// Created by UDQD on 07.10.2020.
//
#include "string"
#include "Table_hash.h"
using namespace std;
template<typename T>

Table_hash::Table_hash(int an) { *m = new Node[an];n=an;}

Table_hash::int hash(T x){
    string s = to_string(x);
    int rez = 0;
    for(int i = 0;i<s.length();i++){
        rez+=s[i];
    }
    return rez%n;
}
Table_hash::void add(T x){
    Node *temp = new Node;
    temp->x = x;
    temp->delta = srh_free(hash(x));
    m[hash(x)+temp->delta] = temp;
}
Table_hash::int srh_free(int ind){
    int count = 0;
    for(int i = ind;i<n;i++){
        if(m[i]!=NULL) count++;
    }
    return count;
}
Table_hash::void show_Table(){
    for(int i = 0;i<n;i++){
        cout<<m[i]<<endl;
    }
}

