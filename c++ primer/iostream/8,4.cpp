#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void test_ifstream(string s)
{
    string line;        //定义存储一句话的字符串
    vector<string> vec; //定义vector
    ifstream in(s);     //定义读取的流文件

    while (!in.eof()) //不到空
    {
        getline(in, s);   //将文件里的一句话读入到字符串s中
        vec.push_back(s); //将内容存入s
    }

    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << endl;
}

int main()
{
    test_ifstream("test.txt");
    cout << "gg" << endl;
    return 0;
}