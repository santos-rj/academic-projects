#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll in; cin >> in;

	ll H, M, S;

	H = in/3600;

	M = ((in%3600)/60);

	S = (in - (M*60) - (H*3600));

	cout << H << "h " << M << "m " << S << "s" << endl; 	


	return 0;
}