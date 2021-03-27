#include <iostream>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll L_1, P_1;
	ll L_2, P_2;
	ll L_3, P_3;

	cin >> L_1 >> P_1;
	cin >> L_2 >> P_2;
	cin >> L_3 >> P_3;

	ll L_ans = L_1 + L_2 + L_3;
	ll P_ans = P_1 + P_2 + P_3;

	string ans;

	if(L_ans > P_ans){
		ans = "Lucas";
	}else if(L_ans < P_ans){
		ans = "Pedro";
	}else{
		ans = "Empate";
	}

	cout << ans << endl;

	return 0;
}
