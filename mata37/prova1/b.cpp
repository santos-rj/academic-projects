#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;


int main(){
	desync;

	ll n, xp, yoda, luke, ahsoka; cin >> n >> xp >> yoda >> luke >> ahsoka;

	yoda += (xp*n);
	luke += (xp*n);
	ahsoka += (xp*n);

	cout << "Yoda " << yoda << "\nLuke " << luke << "\nAhsoka " << ahsoka << endl;

	return 0;
}