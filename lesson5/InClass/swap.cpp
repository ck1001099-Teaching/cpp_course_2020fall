#include <iostream>
using namespace std;

void swap_fail(int, int);
void swap(int*, int*);
void swap_double(double*, double*);

int main(){

	int a = 10, b = 20;
	cout << a << " " << b << endl; // 10 20
	swap(&a, &b);
	cout << a << " " << b << endl; // 20 10

	double c = 3.14, d = 6.28;
	cout << c << " " << d << endl;
	swap_double(&c, &d);
	cout << c << " " << d << endl;

	return 0;
}

void swap_double(double* ptr1, double* ptr2){
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void swap(int* ptr1, int* ptr2){
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void swap_fail(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
	cout << a << " " << b << endl;
}