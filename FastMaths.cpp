#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    string str1, str2;
    cin >> str1 >> str2;
    string ans = "";
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            ans += "0";
        }
        else
        {
            ans += "1";
        }
    }
    cout << ans << endl;
}