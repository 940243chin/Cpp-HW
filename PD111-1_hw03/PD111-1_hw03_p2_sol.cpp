#include <iostream>
using namespace std;
int main(){
	int n, r, c;
	cin >> n >> r >> c;
	int p[30];
	for(int i = 0; i <= n; ++i){
		cin >> p[i];
	}
	int amount = 0, profit = 0;
	for(int i = 1; i <= n; ++i){
		int tmp_profit = 0;
		for(int j = 1; j <= i; ++j){
			tmp_profit += r * p[j] * j / 100;
		}
		for(int j = i + 1; j <= n; ++j){
			tmp_profit += r * p[j] * i / 100;
		}
		tmp_profit -= i * c;
		if(tmp_profit > profit){
			amount = i;
			profit = tmp_profit;
		}
	}
	cout << amount << "," << profit;
	return 0;
}
