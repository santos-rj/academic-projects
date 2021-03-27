#include <iostream>
#include <cmath>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main(){
	desync;

	string ans;
	ll C, c, X, volume_cubo_maior, volume_cubo_menor;

	cin >> C >> c >> X;

	volume_cubo_menor = pow(c,3);
	volume_cubo_maior = pow(C,3);

	if((volume_cubo_menor * X) >= volume_cubo_maior){	
		ans = "Eh possivel";
	}else{
		ans = "!Eh possivel";
	}

	cout << ans << endl;


	return 0;
}