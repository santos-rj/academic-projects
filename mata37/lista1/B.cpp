#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	double E; cin >> E;

	double ans = E/1000;

	cout << fixed << setprecision(2) << ans << endl;

	return 0;
}