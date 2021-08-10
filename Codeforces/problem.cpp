#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
const long long mod = 1e9 + 7;
const double PI = 2 * acos(0.0);
typedef vector<long long> vll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
//#define pair <long long, long long> pll
#define ll long long int
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pf push_front
#define py "YES\n"
#define pn "NO\n"
#define endl '\n'
/* By Hritik Kumar Singh */
/*---------------------------X------------------------------*/

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[4];
        unordered_map<ll, ll> mp;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        // for (auto x : mp)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }

        ll maxFreq = 0;
        for (auto x : mp)
        {
            if (x.second > maxFreq)
            {
                maxFreq = x.second;
            }
        }

        ll ans;
        if (maxFreq == 4)
            ans = 0;
        else if (maxFreq == 3)
            ans = 1;
        else
            ans = 2;

        cout << ans << endl;
    }
    return 0;
}
