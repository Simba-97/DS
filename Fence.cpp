#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n, h; cin >> n >> h;
    vector<int> v(n);
    vector<int> ans(n);
    for(auto& a: v) cin >> a;
    for(auto& a: v){
        if(a > h){
            ans.push_back(2);
        } else {
            ans.push_back(1);
        }
    }
    
    cout << accumulate(ans.begin(), ans.end(), 0) << endl;
    return 0;
}