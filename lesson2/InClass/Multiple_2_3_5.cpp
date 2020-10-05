#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "請輸入一個整數: ";
	cin >> a;
	cout << a << "是不是 2 的倍數? " << (a%2 == 0) << endl;

	cout << a << "是不是 2, 3, 5 的倍數? " << ( a%2 == 0 && a%3 == 0 && a%5 == 0 ) << endl;
	return 0;
}