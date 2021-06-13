#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    cin >> s >> s1;
    bool ok = true;
    int sptr = s1.size()-1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s1[sptr]){
            ok = false;
            sptr--;
        }
        sptr--;
    }
    if(ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}