#include <iostream>
using namespace std;

int main(){
	bool isBreak = false; // flag
	for (int i = 0 ; i < 10 ; i++){
		for (int j = 0 ; j < 10 ; j++){
			cout << i << " " << j << endl;
			if (j == 5){
				isBreak = true;
				break;
			} 
		}
		if (isBreak){
			break;
		}
	}
	
	return 0;
}
