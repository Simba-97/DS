#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll s, n;
    cin >> s >> n;
    string ans = "YES";
    pair<int, int> a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (s > a[i].first)
        {
            s = s + a[i].second;
        }
        else
        {
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
