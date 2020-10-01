#include <iostream>
#include <string> //提供儲存字串的資料型態 
using namespace std;

int main(){
	// 宣告 變數 a 用來儲存一個整數 (integer) ，並給定初始值 10
	// "=" ---> 賦值 (assign): 把等號右邊的值存入左邊的變數 
	int a = 10;
	cout << a << endl;
	
	a = 15;
	cout << a << endl;
	
	// a = 15 + 10  (取出 變數a 的值)
	// a = 25 (計算) 
	a = a + 10;
	cout << a << endl; // 25
	
	// 小數 (浮點數) floating number 
	float b = 3.14;  // 單精度浮點數 
	double c = 6.28; // 雙精度浮點數
	cout << b << " " << c << endl; 
	
	// 字元 (character)
	char d = 't';
	cout << d << endl; 
	
	// 字串 (string)
	string e = "Hello World!";
	cout << e << endl; 
	
	return 0;
}
