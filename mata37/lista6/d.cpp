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
#define MAXN (int)1e3 + 2
#define INF 0x3f3f3f3f

using namespace std;

typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

bool sortBySeconde(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return (a.ss < b.ss);
}

void solve()
{
    ll n = 0;

    cin >> n;

    char ch_a, ch_b;

    cin >> ch_a >> ch_b;

    vector<pair<string, ll>> vet;

    for (ll i = 0; i < n; i++)
    {
        ll level;
        string name;

        cin >> name >> level;

        vet.pb(make_pair(name, level));
    }

    if (ch_a == 'N')
    {
        if (ch_b == 'C')
        {
            sort(vet.begin(), vet.end());
        }
        else
        {
            sort(vet.rbegin(), vet.rend());
        }
    }
    else
    {
        if (ch_b == 'C')
        {
            sort(vet.begin(), vet.end(), sortBySeconde);
        }
        else
        {
            sort(vet.rbegin(), vet.rend(), sortBySeconde);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << vet[i].ff << ' ' << vet[i].ss << endl;
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