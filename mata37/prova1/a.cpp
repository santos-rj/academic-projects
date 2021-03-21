#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;


int main(){
	desync;

	ll x, y, z, ans; cin >> x >> y >> z;


	ans = ((x*100)+(((y*500)+(z*1000))-(((y*500)+(z*1000))*0.1)));

	cout << ans << endl;

	return 0;
}