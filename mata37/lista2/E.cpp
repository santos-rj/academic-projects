#include <iostream>

#define endl '\n'
#define ll long long
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

int main(){
	desync;

	ll C, O, L, X, qnt_C, qnt_O, qnt_L, qnt_X, qnt, ans, h, m, s;

	cin >> C >> O >> L >> X;

	qnt_C = C/4;
	qnt_O = O/8;
	qnt_L = L/2;
	qnt_X = X/1;

	if(qnt_C <= qnt_O && qnt_C <= qnt_L && qnt_C <= qnt_X){
		qnt = qnt_C;
	}else if(qnt_O <= qnt_C && qnt_O <= qnt_L && qnt_O <= qnt_X){
		qnt = qnt_O;
	}else if(qnt_L <= qnt_C && qnt_L <= qnt_O && qnt_L <= qnt_X){
		qnt = qnt_L;
	}else if(qnt_X <= qnt_O && qnt_X <= qnt_L && qnt_X <= qnt_C){
		qnt = qnt_X;
	}

	ans = qnt * 1259;
	
	h = ans/3600;

	m = ((ans%3600)/60);

	s = (ans - (m*60) - (h*3600));

	cout << h << " h " << m << " m " << s <<  " s" << endl;

	return 0;
}