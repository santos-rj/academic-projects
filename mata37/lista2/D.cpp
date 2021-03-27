#include <iostream>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main(){
	desync;

	char z, g, d, c; cin >> z >> g >> d >> c;

	if(z != d){
		cout << "Bloqueado" << endl;
	}else{
		cout << "Driblado" << endl;
		if(g != c){
			cout << "...e o goleiro pega" << endl;
		}else{
			cout << "Gol" << endl;
		}
	}

	return 0;
}