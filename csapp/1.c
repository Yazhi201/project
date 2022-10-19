#include<cstdio>
using namespace std;

const int mx=20000000;

int main() {
    double ans = 0.61234567898765,t=1,s=0;
    for(int i=1;i<mx;i++) s+=(t*=ans);
    //puts("s");
    printf("%f\n",s);

}