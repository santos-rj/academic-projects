// Author: Rafael Santos
// Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define MAXN (int)1e2 + 2
#define INF 0x3f3f3f3f

using namespace std;

typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

ll matriz[MAXN][MAXN];

void solve()
{
    ll n;

    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 1; j <= n; j++)
    //     {
    //         cout << "[" << i << "][" << j << "]:" << matriz[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    ll h, r;

    cin >> h >> r;

    ll harry = 0, ron = 0;

    for (ll j = 1; j <= n; j++)
    {
        if (r + 1 <= n)
        {
            if (j == r + 1 && (r < h))
            {
                harry += matriz[h + 1][j];
            }
            if (j != r + 1)
            {
                harry += matriz[h + 1][j];
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        if (h + 1 <= n)
        {
            if ((i == h + 1) && (h <= r))
            {
                ron += matriz[i][r + 1];
            }

            if (i != h + 1)
            {
                ron += matriz[i][r + 1];
            }
        }
    }

    cout << "Harry " << harry << endl;
    cout << "Ron " << ron << endl;
}

int main()
{

    int t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }
}