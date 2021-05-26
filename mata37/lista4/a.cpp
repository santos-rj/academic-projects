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
#define MAXN 10005
#define INF 0x3f3f3f3f

using namespace std;

typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void solve()
{
    ll n;

    cin >> n;

    int vet[n + 2];

    for (ll i = 1; i <= n; i++)
    {
        cin >> vet[i];
    }

    for (ll i = n; i > 0; i--)
    {
        cout << vet[i] << ' ';
    }

    cout << endl;
}

int32_t main()
{

    int t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }
}