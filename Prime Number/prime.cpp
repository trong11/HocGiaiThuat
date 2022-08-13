#include<iostream>
#include<vector>
using namespace std;
#define N 1000000
#define ll long long


void primeSieve(vector<int> &sieve){

	//Mark 1 and 0 as not prime
	sieve[1] = sieve[0] = 0;
      //start from 2 and mark all multiples of ith number (prime) as not prime 
	for(ll i=2; i<=N; i++){	
		if(sieve[i]){
			for(ll j = i*i; j<=N; j = j + i){
				//marking j as not prime
				sieve[j] = 0;
			}
		}
	}
}


int main(){

	vector<int> sieve(N+1,0); //fill constructor
	primeSieve(sieve);

	for(int i=0; i<=1000; i++){
		if(sieve[i]){
			cout<<i <<" ";
		}
	}
	

	return 0;
}