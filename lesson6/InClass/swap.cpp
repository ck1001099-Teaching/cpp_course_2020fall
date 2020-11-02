#include <iostream>
using namespace std;

void swap(void*, void*, int);

int main(){

	// int: 4 bytes
	int a = 10, b = 20;
	cout << a << " " << b << endl;
	swap(&a, &b, sizeof(int));
	cout << a << " " << b << endl;

	// double: 8 bytes
	double c = 3.14, d = 6.28;
	cout << c << " " << d << endl;
	swap(&c, &d, sizeof(c));
	cout << c << " " << d << endl;

	// char: 1 byte
	char e = 'A', f = 'U';
	cout << e << " " << f << endl;
	swap(&e, &f, sizeof(e));
	cout << e << " " << f << endl;

	return 0;
}

void swap(void* ptr1, void* ptr2, int len){
	char* p1 = (char*)ptr1;
	char* p2 = (char*)ptr2;

	for (int i = 0 ; i < len ; i++){
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		p1 = p1 + 1;
		p2 = p2 + 1;
	}
}