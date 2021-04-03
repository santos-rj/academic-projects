#include <bits/stdc++.h>

#define endl "\n"
#define desync                    \
	ios_base::sync_with_stdio(0); \
	cout.tie(0);                  \
	cin.tie(0)

using namespace std;

typedef long long ll;

void solve()
{

	string ans;
	ll n, q, aux;

	cin >> n >> q;

	aux = n - q;

	if (aux % 2 == 0 && q > n)
	{
		ans = "vendido";
	}
	else
	{
		ans = "sinto muito";
	}

	cout << ans << endl;
}

int main()
{
	desync;

	ll t = 1;

	// cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}