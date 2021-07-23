#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll c1 = n / 3;
        ll c2 = c1;
        ll var = 3 * c1;
        ll val = n - var;
        if (n % 3 == 0)
        {
            c1 = c2;
        }
        else if (val % 2 == 0)
        {
            c2++;
        }
        else
        {
            c1++;
        }

        cout << c1 << " " << c2 << endl;
    }
    return 0;
}