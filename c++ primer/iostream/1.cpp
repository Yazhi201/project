#include <iostream>
using namespace std;


istream& in_put(istream &in) {
    int temp;
    while(1) {
        in >> temp;
        if (in.eof()) {
            cout << "EOF" << endl;
            break;
        }
        if (in.fail()) {
            cout << "format error, enter again: " << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << temp << endl;


    }
    return in;

}


int main() {
    //cout << (char)100 << endl;
    in_put(cin);
    return 0;



}

