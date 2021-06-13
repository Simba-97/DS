#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    string s = to_string(n);
    int count = 0;
        for(auto &b: s){
            if(b == '4' || b == '7'){
                count++;
            }
        }
        if(count == 4 || count == 7 || count == 47){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    
    return 0;
    
}