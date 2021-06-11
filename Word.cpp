#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int upper = 0;
    int lower = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            upper++;
        } else {
            lower++;
        }
    }
    if(lower > upper){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else if (lower == upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << '\n';
    return 0;
}