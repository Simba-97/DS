#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll k, n, w; cin >> k >> n >> w;
    ll totalMoney = 0;
    for(ll i = 1; i <= w; i++){
        totalMoney += i*k;
    }
    if(totalMoney <= n){
        cout << "0" << endl;
    } else {
        cout << totalMoney-n << endl;
    }
    return 0;
}