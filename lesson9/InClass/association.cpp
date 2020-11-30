class A{
public:
	f(){
		b.Do();
	}
	g(){
		b = new B();
	}
private:
	B b;
};

class B{
public:
	Do(){
		cout << "Hello, world!" << endl;
	}
private:

};

int main(){
	A a;
	a.f();
}