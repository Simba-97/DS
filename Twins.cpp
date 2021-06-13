#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int> v(t);
    for(auto &a: v) cin >> a;
    sort(v.begin(), v.end(), greater<int>());
    //for(int i = 0; i< v.size(); i++) cout << v[i];
    int sum = accumulate(v.begin(), v.end(), 0);
    int mySum=0, count=0;
    for(int i = 0; i<v.size(); i++){
        if(sum > mySum or sum == mySum){
            mySum += v[i];
            sum -= v[i];
            count++;
            //cout << mySum << sum << endl;
        }
    }
    cout << count << endl;
    
    return 0;
}