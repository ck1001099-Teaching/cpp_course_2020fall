#include <iostream>
#include <string>
using namespace std;

class Human{
public:
	void SetName(string newName){
		name = newName;
	}
	string GetName(){
		return name;
	}
private:
	string name;
	int age;
	double height;
	double weight;
};

int main(){

	Human h1; // h1 -> name: Cindy, height: 165cm, weight: 55kg
	h1.SetName("Cindy");
	// h1.name = "Cindy";
	// h1.age = 18;
	// h1.height = 165;
	// h1.weight = 55;
	// cout << "姓名: " << h1.name << " , 年齡: " << h1.age << endl;
	cout << "姓名: " << h1.GetName() << endl;

	// Human h2;
	// h2.name = "Bob";
	// h2.age = 23;
	// h2.height = 180;
	// h2.weight = 70;
	// cout << "姓名: " << h2.name << " , 年齡: " << h2.age << endl;

	// cout << "姓名: " << h1.name << " , 年齡: " << h1.age << endl;
	return 0;
}


