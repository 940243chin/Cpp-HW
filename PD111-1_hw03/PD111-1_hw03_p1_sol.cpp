#include <iostream>
using namespace std;
int main(){
	int n, t;
	cin >> n >> t;
	int height_limit = t * 12;
	int cnt[4] = {0, 0, 0, 0};
	int x[30], p[30];
	for(int i = 0; i < n; ++i){
		cin >> x[i];
	}
	for(int i = 0; i < n; ++i){
		cin >> p[i];
	}
	for(int i = 0; i < n; ++i){
		if(x[i] >= height_limit){
			cnt[p[i]]++;
		}
	}
	cout << cnt[1] << "," << cnt[2] << "," << cnt[3]; 
	return 0;
}
