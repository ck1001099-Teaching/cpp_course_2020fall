#include <iostream>
#include <string> //�����x�s�r�ꪺ��ƫ��A 
using namespace std;

int main(){
	// �ŧi �ܼ� a �Ψ��x�s�@�Ӿ�� (integer) �A�õ��w��l�� 10
	// "=" ---> ��� (assign): �ⵥ���k�䪺�Ȧs�J���䪺�ܼ� 
	int a = 10;
	cout << a << endl;
	
	a = 15;
	cout << a << endl;
	
	// a = 15 + 10  (���X �ܼ�a ����)
	// a = 25 (�p��) 
	a = a + 10;
	cout << a << endl; // 25
	
	// �p�� (�B�I��) floating number 
	float b = 3.14;  // ���ׯB�I�� 
	double c = 6.28; // ����ׯB�I��
	cout << b << " " << c << endl; 
	
	// �r�� (character)
	char d = 't';
	cout << d << endl; 
	
	// �r�� (string)
	string e = "Hello World!";
	cout << e << endl; 
	
	return 0;
}
