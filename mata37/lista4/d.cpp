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

void solve()
{
    ll operation, dimension;

    cin >> operation >> dimension;

    int vet_1[MAXN], vet_2[MAXN];

    for (ll i = 1; i <= dimension; i++)
    {
        cin >> vet_1[i];
    }

    if (operation == 3)
    {
        cin >> vet_2[1];
    }
    else
    {
        for (ll i = 1; i <= dimension; i++)
        {
            cin >> vet_2[i];
        }
    }

    if (operation == 1)
    {
        int ans[MAXN];

        for (ll i = 1; i <= dimension; i++)
        {
            ans[i] = vet_1[i] + vet_2[i];
            if (i < dimension)
            {
                cout << ans[i] << ' ';
            }
            else
            {
                cout << ans[i] << endl;
            }
        }
    }
    else if (operation == 2)
    {
        int ans[MAXN];

        for (ll i = 1; i <= dimension; i++)
        {
            ans[i] = vet_1[i] * vet_2[i];
        }

        ll mult = 0;

        for (ll i = 1; i <= dimension; i++)
        {
            mult += ans[i];
        }

        cout << mult << endl;
    }
    else if (operation == 3)
    {
        int ans[MAXN];

        for (ll i = 1; i <= dimension; i++)
        {
            ans[i] = vet_1[i] * vet_2[1];
            if (i < dimension)
            {
                cout << ans[i] << ' ';
            }
            else
            {
                cout << ans[i] << endl;
            }
        }
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