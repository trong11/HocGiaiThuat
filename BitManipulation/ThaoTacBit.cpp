 #include <bits/stdc++.h>
         
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Code/Input.txt", "r", stdin);
    freopen("Code/Output.txt", "w", stdout);
    #endif 
}

int getIthBit(int n,int i){
    int mask = (1<<i);
    return (n & mask)>0 ? 1 : 0;
}

void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n = n& mask;
}

void setIthBit(int &n,int i){
    int mask = (1<<i);
    n = n|mask;
}

void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask; 
}

void clearLastIbits(int &n,int i){
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitsInRange(int &n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

int count_bits(int n){
    int count = 0;
    while (n>0){
        int last_bit = (n&1);
        count += last_bit;
        n = n>>1;
    }
    return count;
}

int convertToBinary (int n){
    int ans = 0;
    int p = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;  

        p = p*10;
        n = n>>1;
    }
    return ans;
}
         
int main(){
    init_code();
    int n;
    cin>>n;
    cout<<convertToBinary(n);
    
}
