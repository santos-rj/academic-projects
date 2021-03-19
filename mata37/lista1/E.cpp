#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll in, C, D, U;

	cin >> in;

	C = in/100;
	D = (in%100)/10;
	U = ((in%100)%10);

	cout << U << " " << D << " " << C << endl;

	return 0;
}