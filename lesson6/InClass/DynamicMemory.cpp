#include <iostream>
using namespace std;

int main(){

	// 宣告3個int指標，並動態配置記憶體，初始值分別為400, 200, 100。
	int *ptr1, *ptr2, *ptr3;
	ptr1 = new int(400);
	ptr2 = new int(200);
	ptr3 = new int(100);

	// 印出3個int指標指向的記憶體位址與值。
	cout << ptr1 << ": " << *ptr1 << endl;
	cout << ptr2 << ": " << *ptr2 << endl;
	cout << ptr3 << ": " << *ptr3 << endl;

	// 宣告2個float指標，並動態配置記憶體，初始值分別為3.14, 6.28。
	float *f1, *f2;
	f1 = new float(3.14);
	f2 = new float(6.28);

	// 印出2個float指標指向的記憶體位址與值。
	cout << f1 << ": " << *f1 << endl;
	cout << f2 << ": " << *f2 << endl;

	// 釋放3個int指標。
	delete ptr1;
	delete ptr2;
	delete ptr3;

	// 重新配置動態記憶體給3個int指標，初始值分別為10, 50, 100。
	ptr1 = new int(10);
	ptr2 = new int(50);
	ptr3 = new int(100);

	// 印出3個int指標指向的記憶體位址與值。
	cout << ptr1 << ": " << *ptr1 << endl;
	cout << ptr2 << ": " << *ptr2 << endl;
	cout << ptr3 << ": " << *ptr3 << endl;

	// 釋放2個float指標。
	delete f1;
	delete f2;

	// 釋放3個int指標。
	delete ptr1;
	delete ptr2;
	delete ptr3;


	/* 錯誤範例 1 */
	int a; //(靜態宣告)
	ptr1 = &a;
	delete ptr1;

	/* 錯誤範例 2 */
	ptr1 = new int;
	*ptr1 = 10;
	ptr2 = ptr1;
	delete ptr2;
	*ptr1 = 100;

	return 0;
}