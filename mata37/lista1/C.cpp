#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll K, J, H, I, L, M;

	cin >> K >> J >> H;
	cin >> I >> L >> M;

	cout << (K+I) << " " << (J+L) << " " << (H+M) << endl;

	return 0;
}
