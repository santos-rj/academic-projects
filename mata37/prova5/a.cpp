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
    ll f, c;

    cin >> f >> c;

    for (ll i = 1; i <= f; i++)
    {
        for (ll j = 1; j <= c; j++)
        {
            cin >> matriz[i][j];
        }
    }

    ll fileira = 0, assento = 0;

    for (ll i = 1; i <= f; i++)
    {
        for (ll j = 1; j <= c; j++)
        {
            if ((i > 0 && i <= f) && (j > 0 && j < c))
            {
                if (matriz[i][j] == 0 && matriz[i][j + 1] == 0)
                {

                    fileira = i;
                    assento = j;
                }
            }
        }
    }

    cout << "Fileira: " << fileira << endl;
    cout << "Assentos: " << assento << " e " << (assento + 1) << endl;
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