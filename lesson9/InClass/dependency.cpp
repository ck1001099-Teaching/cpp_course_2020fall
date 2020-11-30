class A{
public:
	f(B b){
		b.Do();
	}
	g(B b){
		b = new B();
	}
private:

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
	a.f(new B());
}