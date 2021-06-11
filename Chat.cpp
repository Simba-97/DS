#include <bits/stdc++.h>
using namespace std;

int main(){
    string test;
    cin >> test;
    string str = "hello";
    int flag = 0, j = 0;
    for(int i = 0; i < test.size(); i++){
        if(test[i] == str[j]){
            flag++;
            j++;
        }
    }
    if(flag == str.size()){
        cout << "YES\n"; 
    } else {
        cout << "NO\n";
    }
    return 0;
}