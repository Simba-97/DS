#include <bits/stdc++.h>
using namespace std;

int main(){
    string p; cin >> p;
    bool ok = false;
    for(auto &a : p){
        if(a == 72 or a == 81 or a =='9'){
            ok = true;
        }
    }
    (ok)? cout << "YES\n" : cout << "NO\n";
    return 0;
}