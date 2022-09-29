## 1.5 类简介
**class 类**
```
如果我现在有一个类(Sales_item)
定义一个类:
Sales_item item;
```


## 2.1 基本内置类型
### 算术类型
1. 整型(包括字符和布尔类型)
2. 浮点型

```
bool 
char
wchar_t
char32_t
char16_t
short
int
long long
long
float 
double 
long double
```

tips:unsigned + int 会把 int 转为 unsigned

对于一个extern操作，表示声明但是未定义，并且这个操作是不支持初始化的
而一个显式的(int) 则是声明而且定义


对于每个名字都会有一个定义域
```c++
int i = 10;
int main() {
    int i = 5;
    cout << i << ' ' << ::i << endl;
}

```


引用操作,相当于给他了一个别名,两个东西时刻绑定
并且两个对象类型必须保证时刻相等


```c++
指针类型的定义方式
int *p1, *p2;
double *p3, *p4;

获取对象的地址
int ival = 42;
int *p = &ival;

两个对象类型必须保证时刻相等
```

void* 是一种特殊的指针，可以存放人一对象的地址
但不能使用void来访问对象

### 2.4 const
```c++
const对象必须初始化

constexpr 是常量类型

const int *p = nullptr
constexpr int *q = nullptr
p是一个指向整数常量的指针
q是一个指向整数的常量指针
```

### 2.5 类型别名
```
tpyedef double wages
typedef wages base, *p
using SI = Sales_item

```

多文件编译中如果需要重复使用多个头文件
```c++
#ifndef SALES_DATE_H
#define SALES_DATE_H


#endif
使用这个操作，可以让每个头文件只展开一次

```

### 3.2 string

```c++
//string包含在头文件 string中 
#include <string>
using std::string

//初始化的方法

string s1;
string s2(s1);
string s2 = s1;
string s3("value");
string s3 = "value";
string s4(n, 'c');
string s8 = string(10, 'c');

getline(is, s)
s.empty();
s.size();

使用cin读入string的时候,自动忽略开头的空白(空格符,换行符,制表符),遇到下一个空白结束

读入:"    Hello World     "
输出:"Hello"

getline 读取一整行,读入换行符,但是不存储换行符
getline(cin, line);

s.size(); 
返回的东西是string::size_type(无符号整数) 类型的
string 比较是比较的字典序
string + 必须保证两个中有一个是string类型才可以

for (auto c : str) {
    cout << c << endl;
}

输出每个字符

如果想改变其中的一个字符,需要使用引用类型

for (auto &c : str) {
    c = 'a';
}


```


c++库里面提供了is开头的一系列函数表示这个字符是啥(具体翻书)

### 3.3 vector

早期vector嵌套vector
vector<vector<int> >
必须有一个空格

```c++
vector<int> v1;
vector<int> v2(v1);
vector<int> v2 = v1;
vector<int> v3(n,val);
vector<int> v4(n);
vector<int> v2{a,b,c,d...};
vector<int> v2={a,b,c,d...};
列表初始化只能用花括号
这样是错的：vector<string> v1("a", "an", "the");
correct: vector<string> v2{"a", "an", "the"};
默认初始化的为空



有关一些初始化的例子
vector<int> v1(10);
vector<int> v1{10};
vector<int> v1{10, 1};
vector<int> v1(10, 1);

vector<string> v8(10,"hi"); 
but  vector<string> v8("hi");   //错误的


基本操作
v.empty()
v.size()
v.push_back(t)
v[n]
v1 = v2
v1 = {a,b,c,d...}
v1 == v2
v1 != v2
<, <=, >, >=(按照字典序进行排序)

vector<int>::size_type
vector::size_type(错误的)


```




### 3.6 多维数组
```c++
初始化
int arr[100][200] = {0};    //全部初始化为0
int ia[3][4] = {
    {0, 1, 2, 3},   
    {0, 1, 2, 3},
    {0, 1, 2, 3},
}

int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

int ia[3][4] = {{ 0 }, { 4 }, { 8 }};   //给每一行的第一个数初始化，其他默认初始化

int ia[3][4] = {0, 1, 2, 3};
//初始化第一行

当前遍历a数组，如果使用auto
    for (auto &row : a)
        for (auto col : row)
row必须加上引用，不然会认为row是一个 int*

```

类型别名简化多维数组的指针
```c++
using int_array = int[4];
typedef int int_array[4];
这两个等价
```

## 4.1 基础
```c++

一元运算符：& * 

二元运算符：== * 

赋值运算符 一个左值 生成一个左值
取地址符：作用于左值 返回一个指向该对象的指针，这个指针是个右值

cin >> v1 >> v2; 先读入v1,v2

<< 运算符 顺序i未定义
so undefined:
cout << i << " " << ++i << endl;

在bool类型参与计算的时候，很多情况下会被转换成int
% 必须是两个整数，而且结果有可能是负数，m%n的符号和m的符号相同
除法 一律向0取整，即抛弃小数位

if (i < j < k) //k大于1则为真


char c[20];
cout << c << endl;
此时会输出整个字符串
如果想输出地址
cout << &c << endl;
如果输出第一个字符
cout << *c << endl;

```

++的一个用法
```c++

cout << *pbeg++ << endl;
等价于
cout << *pbeg << endl;
++pbeg;
先给pbeg++，然后返回一个之前的pbeg的副本，开始解引用
所以输出的是pbeg刚开始指向的元素

undefined:
*beg = toupper(*beg++);

```
### 4.6 成员访问运算符

```c++
ptr->mem = (*ptr).mem


```


### 4.7 条件运算符(?:)
```c++
cond ? expr1 : expr2;

finalgrade = (grade > 90) ? "high pass" 
                : (grade < 60) ? "fail" : "pass";

奇怪用法
cout << (grade < 60);
cout ? "fail" : "pass";


条件运算符的优先级很低 所以一般需要带括号




```


### 4.8 位运算符
```c++
~
<<
>>
&
^
|
这些运算符同样适用于bitset

如果给char类型是使用 ~ 操作
会把 char 转换为 int ，空位补0



```

### sizeof运算符
```c++
sizeof  返回一条表达式，或者一个类型名字所占的字节数

Sales_data data, *p;
sizeofof(Sales_data);       //储存这个类型的对象所占的空间大小
sizeof data;                //data的大小
sizeof p;                   //指针所占的空间大小
sizeof *p;                  //p所指向的类型的空间大小
sizeof data.revenue;        //revenue成员的大小
sizeof Sales_data::revenue  //另一种获取revenue大小的方法

sizeof满足右结合律 因此
sizeof *p = sizeof (*p)

对数组进行sizeof运算，会返回整个数组所占空间大小，不会把数组转换为指针来处理
```



### 5.4 迭代语句


```c++
for ( ; ; ) ; 
for (x : y);    //y需要保证是一个序列


在 while 和 for 循环中嵌套 switch 语句，可以直接使用 continue 跳跃当前的进程，进入下一次迭代
否则只有switch不可以使用 continue
```


### 6.1.2 函数声明

```c++
函数名字必须在使用之前声明，函数只能定义一次，但是可以声明多次

函数声明和定义的唯一区别是函数声明不需要函数体

一般来说，函数声明放在头文件中，比较方便

比如

//cal.h头文件

int mul(int x,int y);
int dev(int x,int y);
int add(int x,int y);
int sub(int x,int y);


//这个是主程序，使用了cal这个头文件


#include <iostream>
#include <string>
#include <vector>
#include <cstring>

#include "cal.h"


int main() {
    int x,y;
    std::cin >> x >> y;
    std::cout << mul(x, y) << std::endl;
    std::cout << dev(x, y) << std::endl;
    std::cout << sub(x, y) << std::endl;
    std::cout << add(x, y) << std::endl;
    



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




```



### 6.2 参数传递

在有些函数中，如果使用拷贝操作会使得速度变慢

这种情况下，直接使用引用可以加快效率

### 6.25 main 处理命令行选项
```c++
main函数可以传输参数，比如

main函数的参数只能这么写，没有别的写法

int main(int argc, char *argv[]) {
}


int main(int argc, char argv[][]) {
}

上边两种形式都可以，argc表示输入了几个字符串，第0个字符串默认表示当前可执行文件的目录和名称

所以我们默认所有东西从第一个开始

```

### 6.3 返回数组指针

```c++

int arr[10];    //含有10个整数的数组
int *p1[10];    //p1是一个含有10个指针的数组
int (*p2)[10] = &arr;   //p2是一个指针，指向含有10个整数的数组

声明一个返回数组指针的函数（这个东西可以理解为一个二维数组类型）
例子： int (*func(int i))[10];
一维数组直接开普通指针就行了

使用尾置返回类型：
另外一种定义方式
auto func(int i) -> int(*)[10];

使用 decltype

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
decltype(odd) *arrPtr(int i) {
    return (i & 2) ? &odd : &even;
}
返回的还是类似于一个二维数组的指针

6.3.3 习题
编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
string (& ty(int i)) [10] {};
auto ty(int i) -> string (&)[10] {};
decltype(s) &ty (int i) {};

typedef string str[10];
str &ty(int i) {};

using str = string[10];
str &ty(int i) {};

感觉这几个用法还挺恶心的，希望能掌握把

```


### 6.4 函数重载

```c++

void print(const int *beg, const int *end);
void print(const char *cp);
void print(const int ia[],size_t size);

int j[2] = {0,1};
print("Hello world");
print(j, end(j) - begin(j));
print(begin(j), end(j));

同一个作用域，同一个名字函数，接受的形参类型不一样，编译器根据传递的实参类型推断想要的是哪个函数

//main函数；不能重载

顶层const的形参无法和另一个没有顶层形参区分开来
例子：
Record lookup(Phone);
Record lookup(const Phone);


Record lookup(Phone);
Record lookup(const Phone);

但是如果形参是某种类型的指针或引用，此时的const是底层的


Record lookup(Phone&);
Record lookup(const Phone&);


Record lookup(Phone*);
Record lookup(const Phone*);

这种全是合法的重定义

```

## 6.5 特殊用途语言特性

### 6.5.1 默认实参

```c++
string screen(int ht = 24...)
一个某个形参被赋予了初始值，那么以后所有的形参都必须带有默认值

对于一个有默认实参的函数，我们可以给他任意个实参进行调用，只能省尾部的实参

默认实参还可以不是

```




 