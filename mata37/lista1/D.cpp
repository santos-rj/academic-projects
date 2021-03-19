#include <bits/stdc++.h>

#define end "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll L, Z, N, U, S, ans; cin >> L >> Z >> N >> U >> S;

	ans = L + Z + N + U + S;

	cout << ans << endl;

	return 0;
}