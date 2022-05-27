 #include <bits/stdc++.h>
         
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)



int numFromBits(vector<int> sumArr){
	int num=0;
	for(int i = 0;i<32;i++){
		num += (sumArr[i] * (1<<i));
	}
	return num;
}

int main(){
	int n;
	cin>>n;
	vector <int> v(n+2);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	vector<int> sumArr(32,0);
	for(int x : v){
		for(int i =0;i<32;i++){
			int ith_bit = x & (1<<i);
			if(ith_bit){
				sumArr[i]++;
			}	
		}
	}

	for(int i = 0;i<32;i++){
		sumArr[i] = sumArr[i]%3;
	}

	cout<<numFromBits(sumArr);

}
