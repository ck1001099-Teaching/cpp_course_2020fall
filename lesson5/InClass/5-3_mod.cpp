#include <iostream>
using namespace std;

int main(){
	int array[8];

	/*
	array[0]  --> int
	&array[0]  --> int* ptr;  -->  0x0052

	ptr = ptr + 1  --> 0x0056 (int: 4 bytes)

	array == &array[0] --> int*

	double *ptr2 = 0x0070
	ptr2 = ptr2 + 1 --> 0x0078
	*/

	for (int i = 0 ; i < 8 ; i++){
		array[i] = i;
		cout << "第" << i << "個元素的位址: " << &array[i] << endl;
	}

	cout << endl << array[1] << endl;
	return 0;
}