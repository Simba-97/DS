#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int currPeep = 0;
    int maxCap = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        currPeep = currPeep - a + b;
        if(maxCap < currPeep){
            maxCap = currPeep;
        }
    }
    cout << maxCap << '\n';
    return 0;
}