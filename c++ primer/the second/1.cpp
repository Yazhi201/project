#include <iostream>
#include <string>
#include <vector>
#include <cstring>

#include "cal.h"

using namespace std;

int a[10];

// int (*func(int i))[10]
int *func(int i)
{
   
    for (int i = 1; i <= 10; i++)
        a[i - 1] = i;
    return a;
}

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

// decltype(odd) *arrPtr(int i) {
//     // return odd;
//     return (i % 2) ? &odd : &even;
// }

string s[10];

// auto ty(int i) -> string * {
// decltype(s) *ty(int i) {
//     for (int i = 0; i < 10; i++) {
//         s[i] += "sdasd";
//     }
//     return &s;
// }

// string (& ty(int i)) [10] {
// auto ty(int i) -> string (&) [10] {

// typedef string str[10];
// using str = string[10];

// str &ty(int i) 
// {    
//     for (int i = 0; i < 10; i++) {
//         s[i] += "sdasd";
//     }
//     return s;   

// }

// int lookup(int i) {
//     return 0;
// }
// int lookup(const int i) {
//     return 0;
// }

int get(int x) {
    return 1;
}
double get(double x) {
    return 1.0;
}

void screen(int h = 20, int r = 30, char s = 'c') {
    cout << h << ' ' << r << ' ' << s << endl;
}

int main() {
    //screen();
    //screen();
    cout << ((50 ** "3"));


}

int mul(int x, int y)
{
    return x * y;
}

int dev(int x, int y)
{
    return x / y;
}
int sub(int x, int y)
{
    return x - y;
}
int add(int x, int y)
{
    return x + y;
}
