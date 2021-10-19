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

ll binarySearch(vector<ll> &arr, ll l, ll r, ll x)
{
  if (r >= l)
  {
    ll mid = l + (r - l) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);

    return binarySearch(arr, mid + 1, r, x);
  }

  return -1;
}

void solve()
{
  ll n;
  cin >> n;

  vector<ll> vet;

  rep(i, 0, n)
  {
    ll aux;
    cin >> aux;
    vet.pb(aux);
  }

  sort(td(vet));

  ll qnt_identify = 0;
  cin >> qnt_identify;

  vector<ll> night_king;
  for (ll i = 0; i < qnt_identify; i++)
  {
    ll in = 0;
    cin >> in;

    if (binarySearch(vet, 0, n - 1, in) != -1)
    {
      cout << "Preparem o vidro de dragao!!!" << endl;
      return;
    }
  }
  cout << "E assim termina nossa vigilia" << endl;
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