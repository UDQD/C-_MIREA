//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    
    ofstream fout;
    fout.open("file_1.txt");
    if (!fout.is_open()) cout << "error" << endl;
    else {
        fout << "My data";
    }
    fout.close();
}
