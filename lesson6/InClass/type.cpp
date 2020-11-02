#include <iostream>
using namespace std;

int main(){

	double a = 5.76;
	cout << (int)a << endl; //強制轉型
	char c = 'A';
	cout << (int)c << endl;
	int d = 65; // 00000000 00000000 00000000 01000001
	cout << (char)d << endl;
	int e = 321;  // 00000000 00000000 00000001 01000001
	cout << (char)e << endl;

	return 0;
}