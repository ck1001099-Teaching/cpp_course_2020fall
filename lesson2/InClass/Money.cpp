#include <iostream>
using namespace std;

// 百貨公司週年慶: 超過 2000 元，打7折；沒超過，原價
int main(){
	int money;
	cout << "請輸入消費金額: ";
	cin >> money;

	cout << "應付金額: ";
	if (money > 2000){
		cout << int(money * 0.7) << endl; //強制轉型
	} else {
		cout << money << endl;
	}

	return 0;
}