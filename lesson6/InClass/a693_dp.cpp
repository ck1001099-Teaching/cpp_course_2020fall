#include <iostream>
using namespace std;

// line 1: n, m
// line 2: n個不超過1000的正整數 (代表n個食物分別的飽足感)
// line 3~2+m (總共m行): l r （從第 l 個食物吃到第 r 個食物）

// 3 3
// 1 2 3
// 1 2  -> 3
// 1 3  -> 6
// 2 3  -> 5
int main(){
	int n, m;
	while (cin >> n >> m){
		int food[n];
		int dp[n+1];

		dp[0] = 0;
		for (int i = 0 ; i < n ; i++){
			cin >> food[i];
			dp[i+1] = dp[i] + food[i];
		}

		for (int i = 0 ; i < m ; i++){
			int l, r;
			cin >> l >> r;

			int sum = dp[r] - dp[l-1];
			cout << sum << endl;
		}
	}
	return 0;
}