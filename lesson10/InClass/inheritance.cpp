class Animal{
public:
	Set();
protected:
	Get();
private:
	int a;
}

class Dog: private Animal{
private:
	Animal::Set();
	Animal::Get();
}

class Dog: protected Animal{
protected:
	Animal::Set();
	Animal::Get();
}

class Dog: public Animal{
public:
	Animal::Set();
protected:
	Animal::Get();
}

int main(){
	Dog d;

	d.Set();
}


