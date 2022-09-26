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



