#include<iostream>  
#include<sstream>        //istringstream 必须包含这个头文件
#include<string>  
#include<bits/stdc++.h>
using namespace std;  
int main()  
{  
    ifstream file;
    // file.open("~/git/algebra/1.md");
    file.open("1\/1");
    string s;
    file >> s;
    cout << s << endl;
} 