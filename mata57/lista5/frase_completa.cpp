#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ms(v, x) memset(v, x, sizeof(v))
#define ff first
#define ss second
#define td(v) v.begin(), v.end()
#define rep(i, a, n) for (ll i = (a); i < (n); i++)
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

  char letras[26];
  string frase;
  ll n;

  cin >> n;

  ms(letras, 0);

  ll size = 0, code = 0, count = 0;

  cin.ignore();
  for (int k = 0; k < n; k++)
  {
    getline(cin, frase);

    size = frase.length();

    for (int i = 0; i < size; i++)
    {

      code = frase[i] - 97;

      if (code >= 0)
        letras[code] = 1;
    }

    count = 0;

    for (int j = 0; j < 26; j++)
    {

      if (letras[j] == 1)
      {

        count++;
      }
    }

    if (count < 13 && count > 0)
    {
      cout << "frase mal elaborada" << endl;
    }
    if (count >= 13 && count < 26)
    {
      cout << "frase quase completa" << endl;
    }
    if (count == 26)
    {
      cout << "frase completa" << endl;
    }
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