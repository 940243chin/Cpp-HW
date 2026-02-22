#include <iostream>
using namespace std;
int main(){
	int n, m, c, r[10];
	cin >> n >> m >> c;
	for(int i = 1; i <= m; ++i){
		cin >> r[i];
	}
	int best_price = r[1], best_amount = 0, best_profit = 0;
	for(int ind = 1; ind <= m; ind++){
		int current_r = r[ind];
		int p[30];
		for(int i = 0; i <= n; ++i){
			cin >> p[i];
		}
		for(int i = 0; i <= n; ++i){
			int tmp_profit = 0;
			for(int j = 0; j <= i; ++j){
				tmp_profit += current_r * p[j] * j / 100;
			}
			for(int j = i + 1; j <= n; ++j){
				tmp_profit += current_r * p[j] * i / 100;
			}
			tmp_profit -= i * c;
			if(tmp_profit > best_profit || (tmp_profit == best_profit && current_r < best_price)){
				best_price = current_r;
				best_amount = i;
				best_profit = tmp_profit;
			}
		}
	}
	cout << best_price << "," << best_amount << "," << best_profit << '\n';
	return 0;
}
