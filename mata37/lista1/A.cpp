#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;


int main(){
	desync;

	ll D, P; cin >> D >> P;

	ll E = ((D*P)/(D+P+1));

	cout << E << endl;

	return 0;
}