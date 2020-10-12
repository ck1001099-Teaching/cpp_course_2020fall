#include <iostream>
using namespace std;

int main(){
	int array[10];
	
	for (int i = 0 ; i < 10 ; i++){
		if (i == 0){
			array[i] = 1;
		} else {
			array[i] = array[i-1] * 2;
		}
		
	}

	for (int i = 0 ; i < 10 ; i++){
		cout << "element " << i << " : " << array[i] << endl;
	}

	return 0;
}