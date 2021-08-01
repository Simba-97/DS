#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n > 0){
            ll sum = floor((n+1)/10);
            cout << sum << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}