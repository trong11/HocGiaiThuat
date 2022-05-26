 #include <bits/stdc++.h>
         
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif 
}

int main(){
	init_code();
	int n;
	cin>>n;
	vector <int> v(n+2);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int xorr = 0;

	for(int i=0;i<n;i++){
		xorr = xorr ^ v[i];
	}

	int pos = 0;
	int temp = xorr;
    while((temp&1) == 0){
    	pos++;
    	temp = temp >>1;
    }
    int setA = 0;
    int setB = 0;
    int mask = (1<<pos);

    for(int i =0;i<v.size();i++){
    	if((v[i] & mask) > 0){
    		setA = setA ^ v[i];
    	}else{
    		setB = setB ^ v[i];
    	}
    }
    cout<<setA<<" "<<setB;


}