#include <iostream>
using namespace std;

int main(){
	/*
	// for 寫法 - counter 用 double型態
	for (double temp = 37.0 ; temp < 39.1 ; temp = temp + 0.1){
		cout << "攝氏: " << temp << "度 => 華氏: " << temp*(9.0/5)+32 << "度" << endl;
	}
	*/

	// for 寫法 - counter 用 int型態
	for (int i = 0 ; i < 21 ; i++){
		double temp = 37.0 + i * 0.1;
		cout << "攝氏: " << temp << "度 => 華氏: " << temp*(9.0/5)+32 << "度" << endl;	
	}

	/*
	// while 寫法
	double T = 37.0;
	while (T < 39.1){
		double tmp = T * 9.0 / 5.0 + 32.0;
		cout << "攝氏：" << T << "度，華氏：" << tmp << "度" << endl;
		T = T + 0.1;
	}
	*/
	return 0;
}