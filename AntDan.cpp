#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    string s; cin >> s;
    long long antonCount = 0, danikCount = 0;
    for(auto &a: s){
        if(a == 'A'){
            antonCount++;
        } else {
            danikCount++;
        }
    }

    if(antonCount == danikCount){
        cout << "Friendship" << endl;
    } else if(danikCount > antonCount) {
        cout << "Danik" << endl;
    } else {
        cout << "Anton" << endl;
    }
    return 0;
}