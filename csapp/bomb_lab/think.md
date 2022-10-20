### phase_6


```c
// r13 指向的是rsp,也就是当前a[0],每次加4,也就是每次给数组下表加1

// Part1:

for (int i = 0; i < 6; i++) {
    int x = a[i];
    x--;
    if (x > 5) boom();
    for (int j = i + 1; j < 6; j++)         //这个6位数的数组不能有相同的数
        if (a[j] == a[i]) boom();
}

// Part2:

for (int *i = a.begin(); i != a.end(); i++)
    *i = 7 - *i;

// 把所有数变成 7 - i




```




