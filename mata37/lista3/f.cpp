#include <iostream>

#define endl '\n';
#define dsync                     \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)

using namespace std;

typedef long long ll;

void solve()
{

    ll n, m, ans = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        ll aux = 0;

        for (int j = 0; j < m; j++)
        {
            ll in;
            cin >> in;

            aux += in;
        }

        if (aux > ans)
        {
            ans = aux;
        }
    }
    cout << ans << endl;
}

int main()
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