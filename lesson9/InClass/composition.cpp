class A{
public:
	A(){
		cs = new C[10];
	}
	~A(){
		delete cs;
	}
private:
	vector<B> bs;
	C* cs;
};

class B{
public:
	
private:

};

class C{
public:

private:

};