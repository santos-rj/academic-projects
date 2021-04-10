#include <iostream>
#include <climits>

#define endl '\n'
#define ll long long
#define desync                    \
	ios_base::sync_with_stdio(0); \
	cout.tie(0);                  \
	cin.tie(0)

using namespace std;

int main()
{
	desync;

	ll C, O, L, X, qnt_C, qnt_O, qnt_L, qnt_X, ans, h, m, s, min = INT_MAX;

	cin >> C >> O >> L >> X;

	qnt_C = C / 4;
	qnt_O = O / 8;
	qnt_L = L / 2;
	qnt_X = X / 1;

	if (qnt_C < min)
	{
		min = qnt_C;
	}

	if (qnt_O < min)
	{
		min = qnt_O;
	}

	if (qnt_L < min)
	{
		min = qnt_L;
	}

	if (qnt_X < min)
	{
		min = qnt_X;
	}

	ans = min * 1259;

	h = ans / 3600;

	m = ((ans % 3600) / 60);

	s = (ans - (m * 60) - (h * 3600));

	cout << h << " h " << m << " m " << s << " s" << endl;

	return 0;
}