#include <array>
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

struct nod {

    int x,y;
    nod(){x = y = 0;}
    nod(int a, int b) {
        x = a;
        y = b;

    }
};

int main() {
//     array<int, 10> a1 = {5, 3, 2};
//     cout << a1[2] << endl;
// //  array<int, 20> a2 = a1;
//     list<string> l = {"ab", "bc"};
//     // list<char *> l = {'a'};
//     vector<string> s;
//     s.assign(l.begin(), l.end());
//     cout << s[0] << s[1] << endl;
//     cout << s.max_size() << endl;
    // list<int> s = {1, 2, 3};
    vector<int> h = {1, 2, 3};
    vector<int>::iterator it = h.begin();
    vector<int>::iterator it2 = h.insert(it, 3, 10);
    cout << (*it2) << endl;
    cout << h.size() << endl;
    // cout << (s == h) << endl;
    vector<nod> s;
    s.emplace_back(1,2);
    vector<int>::iterator iter = h.begin() + 
                                h.size()/2;
    cout << iter - h.begin() << endl;
    cout << *iter << endl;
    int &x = h.back();
    cout << h.back() << endl;
    x = 5;
    cout << h.back() << endl;
    cout << *(--iter) << endl;
    cout << h.at(2) << endl;
    system("clear");
    // cout << "\033c";
}