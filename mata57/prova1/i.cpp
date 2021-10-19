#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ms(v, x) memset(v, x, sizeof(v))
#define ff first
#define ss second
#define td(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = (a); i < (n); i++)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define re(v)           \
  {                     \
    for (auto &_re : v) \
      cin >> _re;       \
  }
#define pr(v)             \
  {                       \
    for (auto _pr : v)    \
      cout << _pr << " "; \
    cout << endl;         \
  }
#define prr(v)                                   \
  {                                              \
    for (auto _prr : v)                          \
      cout << _prr.ff << " " << _prr.ss << endl; \
  }
#define dsync                   \
  ios_base::sync_with_stdio(0); \
  cout.tie(0);                  \
  cin.tie(0)
using namespace std;
const ll M = 1e9 + 7;
const double PI = acos(-1);
const double min_dist_v = 1e-4;
const double min_dist_e = 1e-6;
const double eps = 1e-6;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

unsigned ll catalan[50 + 1];

void solve()
{
  int q[3][3];
  int i, j;
  int s, p;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin >> q[i][j];

  s = 0;
  for (i = 0; i < 3; i++)
    s += q[0][i];

  for (i = 1; i < 3 && s != -1; i++)
  {
    p = 0;
    for (j = 0; j < 3; j++)
      p += q[i][j];
    if (p != s)
      s = -1;
  }

  for (j = 0; j < 3 && s != -1; j++)
  {
    p = 0;
    for (i = 0; i < 3; i++)
      p += q[i][j];
    if (p != s)
      s = -1;
  }

  p = 0;
  for (i = 0; i < 3 && s != -1; i++)
    p += q[i][i];
  if (p != s)
    s = -1;

  p = 0;
  for (i = 0; i < 3 && s != -1; i++)
    p += q[i][3 - i - 1];
  if (p != s)
    s = -1;

  string result = "eh um quadrado magico";

  if (s == -1)
    result = "nao eh um quadrado magico";

  cout << result << endl;
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