#include <bits/stdc++.h>
using namespace std;

int a[6];
int rax, r12d, rbx;
int *r13 = a, *rbp = nullptr;



int main() {
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
    r12d = 0;
    while(1) {
        rbp = r13;
        rax = *r13;
        rax --;
        if (rax > 5) {
            cout << "gg\n";
            return 1;
        }
        r12d++;
        if(r12d == 6) {
           cout << "yes\n";
           return 0;
        }
        rbx = r12d;
        do {
            rax = rbx;

            rax = a[rax];
            cout << rax << (*rbp) << endl;
            if (rax == *rbp) {
                cout << "gg\n";
                return 1;
            }
            rbx++;
        } while (rbx <= 5);
        r13++;
    }




}


rsi = a[6];
rax = &a[0];
rcx = 7;

do {
    rdx = rcx;
    rdx = rdx - *rax;
    *rax = edx;
    rax += 4;


} while(rax != rsi);


rsi = 0;
    
t3: rcx = [rsi + rsp];

if (rcx > 1) {
    rax = 1;
    rdx = 0x6032d0;
    t1();
}
else {
    rdx = 0x6032d0;
    t2();
}
t1: 
   do {
        rdx = [rdx + 8];
        rax ++;
    } while(rax != rcx);
    t2();
t2:    
    [32 + rsp + rsi * 2] = rdx
    rsi += 4
    if(rsi == 24) jump;    
    t3();


