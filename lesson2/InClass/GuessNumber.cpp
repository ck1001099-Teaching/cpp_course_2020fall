//寫一個程式，設計一個終極密碼的遊戲。
// 1. 輸入通關密碼，數字必須在1~100之間。  --> answer (int: 1~100)
// 2. 輸入數字後按下Enter鍵。              --> cin >> guess;
// 3. 若猜錯，就顯示縮小後的數字範圍，並依提示再次猜謎。
// 4. 若猜對，則顯示評語。
#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	// 遊戲開始: 初始化 
	// 設定通關密碼 
	srand(time(NULL)); // 初始化  亂數種子 (random seed) (根據當前時間初始化) 
	int answer = rand() % 100 + 1;
	// 設定猜謎範圍
	int lowerBound = 1, upperBound = 100; 
	
	// 遊戲進行中: 玩家猜數字 
	while (true){
		cout << "請猜 " << lowerBound << " ~ " << upperBound << " 之間的一個數字: ";
		
		int guess;
		cin >> guess;
		
		if (guess < lowerBound || guess > upperBound){
			cout << "超出指定範圍了，請再猜一次" << endl;
			continue;
		}
		
		if (answer == guess){
			// 遊戲結束: 顯示祝賀詞 
			cout << "好棒! 恭喜你猜對了!!!" << endl;
			break; 
		} else {
			if (guess < answer){
				cout << "太小了!" << endl;
				lowerBound = guess + 1;
			}
			if (guess > answer){
				cout << "太大了!" << endl;
				upperBound = guess - 1;
			}
		}
	}
	
	return 0;
}
