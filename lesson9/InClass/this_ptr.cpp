#include <iostream>
using namespace std;

class A{
public:
	void PrintThis(){
		cout << this << endl;
	}
	void SetX(int x){
		this->x = x;
	}
	int GetX(){
		return (*this).x;
	}
private:
	int x;
};

int main(){

	A a1, a2;
	cout << &a1 << " " << &a2 << endl;

	a1.PrintThis();
	a2.PrintThis();

	a1.SetX(12);
	a2.SetX(32);

	cout << (&a1)->GetX() << endl;
	cout << a2.GetX() << endl;

	return 0;
}