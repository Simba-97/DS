#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k; cin >> n >> k;
    ll ans = 0;
    for(ll i = 0; i < k; i++){
        //ll lastDig = n%10;
        //cout << lastDig  << endl;
        if(n%10 != 0){
            n = n - 1;
            //cout << n << endl;
        } else {
            n = n/10;
           //cout << n << endl;
        }
    }
    cout << n << endl;
    return 0;
}