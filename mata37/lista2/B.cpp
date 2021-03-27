#include <iostream>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	char ans;
	ll a, b, c;

	cin >> a >> b >> c;

	if(((c/a)+1) <= b){
		ans = 'S';
	}else{
		ans = 'N';
	}

	cout << ans << endl;

	return 0;
}