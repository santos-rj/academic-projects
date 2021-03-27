#include <iostream>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll a, d, p, sum, ans; cin >> a >> d >> p;

	sum = a + d + p;

	if(sum <= 110){
		ans = (100*sum)/110;

		if(ans >= 0 && ans <= 50){
			cout << "Seu pokemon nao fara progresso em batalhas";
		}else if(ans >= 51 && ans <= 66){
			cout << "Seu pokemon esta acima da media";
		}else if(ans >= 67 && ans <= 79){
			cout << "Seu pokemon certamente me chamou atencao";
		}else if(ans >= 80 && ans <= 100){
			cout << "Seu pokemon e uma maravilha";
		}else{
			cout << "Hum, parece que houve um erro";
		}

	}else{
		cout << "Hum, parece que houve um erro";
	}

	cout << endl;

	return 0;
}