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

    string ans = "O Havai pode dormir tranquilo";

    ll p, t;

    cin >> t >> p;

    while (p != 0)
    {

        if (p > t)
        {
            ans = "ALARME";
            break;
        }

        cin >> p;
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