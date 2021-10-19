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

void solve()
{
  ll n;
  cin >> n;

  vector<ll> vet;

  rep(i, 0, n)
  {
    ll aux = 0;
    cin >> aux;
    vet.pb(aux);
  }

  ll number_part = 0, select_part = 0;

  cin >> number_part >> select_part;

  if (n % number_part != 0 || n == number_part)
  {
    cout << "Impossivel!" << endl;
    return;
  }

  sort(vet.begin() + ((select_part - 1) * (n / number_part)), vet.begin() + ((select_part - 1) * (n / number_part)) + (n / number_part));

  rep(i, 0, n)
  {
    cout << vet[i] << ' ';
  }
  cout << endl;
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