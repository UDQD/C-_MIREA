#include "Graph.h"

int main()
{
    int* m1 = new int[3];
    m1[0] = 1;
    m1[1] = 10;
    m1[2] = 2;
    int* m2 = new int[3];
    m2[0] = 1;
    m2[1] = 20;
    m2[2] = 3;
    
    vector<int*> v;
    v.push_back(m1);
    v.push_back(m2);
    Graph a(v);
    a.show_graph();
}

