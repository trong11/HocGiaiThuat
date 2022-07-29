#include <bits/stdc++.h>

#define int long long int
using namespace std;
const int mod = 1e9 + 7;

int multi(int a,int b,int c){
	int res = 0;
	while (b){
		if(b&1) res = res + a,res %= c;
		a +=a; a%=c;
		b /=2;
	}
	return res;
}

int32_t main(){
	cout<<multi(2,200,1e9+7);
}