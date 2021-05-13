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
    char p;
    ll s;

    cin >> p >> s;

    while (p != '#')
    {
        string ans = "";

        if (s < 90)
        {
            ans = "Internação";
        }
        else
        {
            ans = "Alta";
        }

        cout << p << ' ' << ans << endl;

        cin >> p >> s;
    }
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