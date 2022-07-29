#include <bits/stdc++.h>
         
using namespace std;

void solve(string s,int num){
	 int j = 0;
        while(num>0){
        	int last_bit = num & 1;
        	if(last_bit){
        		cout<<s[j];
        	}
        	j++;
        	num = num >> 1;
        }
        cout<<endl;  
}

int main(){
	string s;
	cin>>s;

	for(int i =0 ;i < (1<<s.size());i++){
       solve(s,i);
	} 
}