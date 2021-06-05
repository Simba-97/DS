#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, newStr;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '+'){
            newStr.push_back(str[i]);
        }
    }

    sort(newStr.begin(), newStr.end());
    cout << newStr[0];
    for(int i = 1; i < newStr.length(); i++){
        cout << "+" << newStr[i];
    }
}