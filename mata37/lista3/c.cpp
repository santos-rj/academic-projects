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
    ll n, h = 0, m = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll in = 0;
        cin >> in;

        if (in == 1)
        {
            h++;
        }
        else
        {
            m++;
        }
    }

    cout << h << '\n'
         << m << endl;
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