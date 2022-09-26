#include <iostream>
// #include "2.h"
using namespace std;

// int i = 10;

// struct nod;

int main() {
    // nod j;
    // int i = 0;
    // cout << i << ' ' << ::i << endl;
    // int ival = 1024;
    // int &refval = ival; 
    // refval = 1000;
    // cout << refval << ' ' << ival << endl;    
    // int *ival = 0;   
    // cin >> ival; 
    // cout << ival << endl;
    // int *it = &ival;
    // cout << it << endl;
    // cout << "Hello World\n";
    // cout << *ival << endl;
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    cout << *p1 << endl;
}

