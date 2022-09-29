#include <iostream>
#include <string>
#include <vector>
#include <cstring>

#include "cal.h"

using namespace std;


int main(int argc, char *argv[]) {
//   int x,y;
//   std::cin >> x >> y;
//   std::cout << mul(x, y) << std::endl;
//   std::cout << dev(x, y) << std::endl;
//   std::cout << sub(x, y) << std::endl;
//   std::cout << add(x, y) << std::endl;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }



}


int mul(int x, int y) {
    return x * y;
}

int dev(int x, int y) {
    return x / y;
}
int sub(int x, int y) {
    return x - y;
}
int add(int x, int y) {
    return x + y;
}
