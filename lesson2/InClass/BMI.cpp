#include <iostream>
using namespace std;

//使用者輸入身高、體重 -> 計算 BMI -> 輸出到螢幕上
int main(){
	double height, weight;
	// 使用者輸入身高、體重
	cout << "請輸入身高 (m): ";
	cin >> height;
	cout << "請輸入體重 (kg): ";
	cin >> weight;

	// BMI = 體重(kg) / 身高(m)^2
	double BMI = weight / height / height;
	cout << "您的 BMI 是 " << BMI << endl;

	return 0;
}