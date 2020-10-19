#include <iostream>
#include <math.h>
using namespace std;

int main(){

	double a;
	cin >> a;
	if (a < 0){
		cout << "請輸入大於等於0的數" << endl;
		return 0;
	}

	double b = sqrt(a);

	cout << b << endl;

	return 0;
}