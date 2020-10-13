#include <iostream>
#include <stdlib.h> // rand(), srand()
using namespace std;

int main(){
	
	// rand() --> random (ÀH¾÷)
	
	for (int i = 0 ; i < 20 ; i++){
		cout << rand() % 100 + 1 << endl;
	}
	 
	
	return 0;
}
