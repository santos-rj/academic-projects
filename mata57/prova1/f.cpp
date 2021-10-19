#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ms(v, x) memset(v, x, sizeof(v))
#define ff first
#define ss second
#define td(v) v.begin(), v.end()
#define rep(a, n) for (int i = (a); i < (n); i++)
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

void catalan_sequence(unsigned ll n)
{

  catalan[0] = catalan[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    catalan[i] = 0;
    for (int j = 0; j < i; j++)
      catalan[i] += catalan[j] * catalan[i - j - 1];
  }
}

void solve()
{

  ll n = 0, in = 0;

  cin >> n >> in;

  catalan_sequence(n);

  rep(0, n)
  {
    if (catalan[i] == in)
    {
      cout << in << " esta na posicao " << (i + 1) << endl;
      return;
    }
  }
  cout << in << " nao existe " << endl;
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