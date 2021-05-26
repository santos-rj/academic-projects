#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define dsync                     \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
        }
    }
}

int32_t main()
{
    dsync;

    ll t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
