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
		for (int i = 0 ; i < n ; i++){
			cin >> food[i];
		}

		for (int i = 0 ; i < m ; i++){
			int l, r;
			cin >> l >> r;

			int sum = 0;
			for (int j = l-1 ; j < r ; j++){
				sum = sum + food[j];
			}
			cout << sum << endl;
		}
	}
	return 0;
}