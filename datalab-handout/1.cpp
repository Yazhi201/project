#include<bits/stdc++.h>
using namespace std;


int floatFloat2Int(unsigned uf) {
	unsigned sign; int exp,m;
	exp = (uf & 0x7f800000u) >> 23;	
	sign = uf & (1u<<31);
	exp -= 127;
	if(exp < 0) return 0u;
	m = uf & 0x7fffff;
	cout<<uf<<' '<<exp<<endl;
	if(sign && exp == 31 && !m) return sign;
	if(exp <= 23) {
		m >>= 23-exp;
		m += 1 << exp;
	}
	else if(exp <= 30){
		m = (1<<23) + m;
		m <<= (exp - 23);
	}
	else return 0x80000000;
	if(sign) m = (~m)+1;
	return (int)m;
}

int main() {
	int x;
	cin>>x;
	cout<<floatFloat2Int(x);
	

}
