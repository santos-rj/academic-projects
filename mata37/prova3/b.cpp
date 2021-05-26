#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define dsync                     \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)

using namespace std;

void solve()
{
    ll n;

    cin >> n;

    const double aposentadoria = 940.00;

    double soma = 0.00;

    while (n--)
    {
        double in = 0;

        cin >> in;

        soma += in;
    }

    if (soma > aposentadoria)
    {
        cout << "Saldo insuficiente. Coitadinho do Seu Toinho." << endl;
    }
    else
    {
        double ans = (double)940.00 - soma;

        cout << fixed << setprecision(2);

        cout << "R$ " << ans << endl;
    }
}

int32_t main()
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
