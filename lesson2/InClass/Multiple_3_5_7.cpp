#include <iostream>
using namespace std;

int main(){
	
	for (int i = 0 ; i < 1000 ; i++){
		//cout << i << endl; // debug
		int value = i + 1;
		//cout << value << endl; // 1 ~ 1000
		
//		if (value % 3 == 0 || value % 5 == 0 || value % 7 == 0){
//			是 3 或 5 或 7 的倍數 
//			3, 5, 6, 7, 9, 10, 12, 14, 15, ...
//		}
		if (value % 3 == 0 && value % 5 == 0 && value % 7 == 0){
			//是 3, 5, 7 的倍數
			//105, 210, 315, ... 
			cout << value << endl;
		}
	}
	
	return 0;
}
