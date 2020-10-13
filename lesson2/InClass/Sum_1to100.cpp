#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int sum = 0;
	
	// i : 計數器 (counter) 
	for (int i = 0 ; i < n ; i++){
		//cout << i << endl; // 0 ~ 99
		cout << i+1 << endl; // 1 ~ 100
		sum = sum + (i+1);
	}
	cout << "1+...+" << n << " 等於 " << sum << endl;	
	
	return 0;
} 
