#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int j = 100;
	while (true){
		cout << i << endl;
		i = i + 1;
		if (i >= 12){
			j = j - 1;
			if (j < 70){
				break;
			}
		}
	}
	
//	while (i < 12){
//		...
//	}
	
	return 0;
}
