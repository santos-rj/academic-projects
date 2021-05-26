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
#define MAXN 1e3 + 2
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
    ll m;
    cin >> m;

    ll n;
    cin >> n;

    vector<ll> v(MAXN, 0);

    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll soma = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll b;
        cin >> b;
        soma += v[i] * b;
    }

    if (soma >= m)
    {
        cout << "Upou de Nivel!\n";
    }
    else
    {
        cout << "Nao foi dessa vez!\n";
    }
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