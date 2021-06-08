#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll power(ll x, ll y){
    ll res = 1;
    while(y){
        if(y%2 == 1)
            res = (res*x);
        y = y >> 1;

        x = (x*x);
    }
    return res;
}
 
ll Power(ll x, unsigned int y, ll p){
    ll res = 1;
    x = x%p;

    if(x == 0) return 0;

    while(y > 0){
        if(y & 1)
            res = (res*x) % p;
        y = y >> 1;
        x = (x*x) % p;
    }
    return res;
}

int main(){
    ll t; cin >> t;
    while(t--){
        ll mod = power(10,9)+7;
        ll n, m; cin >> n >> m;
        ll ans = Power(2,n,mod) - 1;
        ll mainAns = Power(ans, m, mod);
        cout << mainAns << endl;
    }
}