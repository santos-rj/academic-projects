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
    string ans = "Tá safe, o caminho é izi!!!";

    ll n, k, in = 0;

    cin >> n >> k >> in;

    for (ll i = 0; i < n; i++)
    {

        if (in > k)
        {
            ans = "Você não vai passar!!!";
            break;
        }

        cin >> in;
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