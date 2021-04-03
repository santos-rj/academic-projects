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
	ll x, y;

	cin >> x >> y;

	if (x > 0 & y > 0)
	{
		ans = "Quadrante 1";
	}
	else if (x < 0 && y > 0)
	{
		ans = "Quadrante 2";
	}
	else if (x < 0 && y < 0)
	{
		ans = "Quadrante 3";
	}
	else if (x > 0 && y < 0)
	{
		ans = "Quadrante 4";
	}
	else
	{
		ans = "Centro";
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