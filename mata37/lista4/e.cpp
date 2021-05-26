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

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.pb(in);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0 && v[i] < 8)
        {
            ans.push_back(v[i]);
            cout << v[i] << ' ';
        }
    }
    cout << endl;

    if (ans.size() == 7)
    {
        cout << "Saia Shenlong e realize o meu desejo";
    }
    else
    {
        cout << "Nao encontramos todas";
    }
    cout << endl;
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