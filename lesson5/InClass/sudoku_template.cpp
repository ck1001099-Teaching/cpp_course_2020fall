#include <iostream>
#include <fstream>
using namespace std;

void Output(int[][9]);

int main(){
	//1. 讀檔 （輸入題目）
	ifstream ifs;
	ifs.open("q1.txt", ios::in);
	if (!ifs){
		cout << "讀檔失敗" << endl;
		return 0;
	}
	int sudoku[9][9];
	for (int i = 0 ; i < 9 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			ifs >> sudoku[i][j];
		}
	}
	ifs.close();

	Output(sudoku);	

	//2. 解題
	while (true){
		if (檢查9*9的格子是不是都不為0){
			break;
		}

		for 遍尋每個為0的格子:
			檢查這個格子有哪些數字可以填
			if 可以填的數字只有1個:
				填這個數字進去這個格子
	}

	//3. 寫檔 （輸出答案）


	return 0;
}

void Output(int sudoku[][9]){
	for (int i = 0 ; i < 9 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			cout << sudoku[i][j] << " ";
		}
		cout << endl;
	}
}
