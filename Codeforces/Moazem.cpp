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
#define pair <long long, long long> pll
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
        ll g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        ll countryA = g1 + s1 + b1;
        ll countryB = g2 + s2 + b2;
        (countryA > countryB) ? cout << 1 << endl : cout << 2 << endl;
    }
    return 0;
}
