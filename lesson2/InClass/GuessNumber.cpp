//�g�@�ӵ{���A�]�p�@�Ӳ׷��K�X���C���C
// 1. ��J�q���K�X�A�Ʀr�����b1~100�����C  --> answer (int: 1~100)
// 2. ��J�Ʀr����UEnter��C              --> cin >> guess;
// 3. �Y�q���A�N����Y�p�᪺�Ʀr�d��A�è̴��ܦA���q���C
// 4. �Y�q��A�h��ܵ��y�C
#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	// �C���}�l: ��l�� 
	// �]�w�q���K�X 
	srand(time(NULL)); // ��l��  �üƺؤl (random seed) (�ھڷ�e�ɶ���l��) 
	int answer = rand() % 100 + 1;
	// �]�w�q���d��
	int lowerBound = 1, upperBound = 100; 
	
	// �C���i�椤: ���a�q�Ʀr 
	while (true){
		cout << "�вq " << lowerBound << " ~ " << upperBound << " �������@�ӼƦr: ";
		
		int guess;
		cin >> guess;
		
		if (guess < lowerBound || guess > upperBound){
			cout << "�W�X���w�d��F�A�ЦA�q�@��" << endl;
			continue;
		}
		
		if (answer == guess){
			// �C������: ��ܯ��P�� 
			cout << "�n��! ���ߧA�q��F!!!" << endl;
			break; 
		} else {
			if (guess < answer){
				cout << "�Ӥp�F!" << endl;
				lowerBound = guess + 1;
			}
			if (guess > answer){
				cout << "�Ӥj�F!" << endl;
				upperBound = guess - 1;
			}
		}
	}
	
	return 0;
}
