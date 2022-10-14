#include<iostream>  
#include<sstream>        //istringstream 必须包含这个头文件
#include<string>  
using namespace std;  
int main()  
{  
    string str="i an a boy";  
    istringstream is(str);  
    string s;  
    while(is>>s)  
    {  
        cout<<s<<endl;  
    }  
      
} 