// 1. 請寫一個函數，用以計算整數的次方。
// 輸入：int a, int n
// 輸出：a^n (int)
// 2. 請寫一個函數，找出四個整數中的最大值。
// 輸入：int a, int b, int c, int d
// 輸出：max(a,b,c,d)
// 3. 請寫一個函數，在螢幕上輸出10行「Hello, world!」。
// 輸入：無
// 輸出：無
#include <iostream>
using namespace std;

int pow(int, int);
int max(int, int, int, int);
void HelloWorld();

int main(){

	int a = 3, n = 2;
	int result = pow(a, n);
	cout << a << " " << n << endl;
	cout << result << endl;

	int maxValue1 = max(3, 5, 10, 2);
	int maxValue2 = max(-10, -100, -1000, -10000);
	cout << maxValue1 << " " << maxValue2 << endl;

	HelloWorld();

	return 0;
}

int pow(int a, int n){
	int base = 1;
	for (int i = 0 ; i < n ; i++){
		base = base * a;
	}
	return base;
}

int max(int a, int b, int c, int d){
	int maxValue = a;
	if (maxValue < b){
		maxValue = b;
	}
	if (maxValue < c){
		maxValue = c;
	}
	if (maxValue < d){
		maxValue = d;
	}
	return maxValue;
}

void HelloWorld(){
	for (int i = 0 ; i < 10 ; i++){
		cout << "Hello, world!" << endl;
	}
}