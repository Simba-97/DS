#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string str;  cin >> str;
    int count0 = 0, count1 = 0, count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i]=='0'){
            count0++;
            count1 = 0;
        } else {
            count1++;
            count0 = 0;
        }
        if(count0 == 7 || count1 == 7){
            count = 1;
        }
    }
    (count == 1)? cout << "YES" : cout << "NO" ;
    return 0;
}