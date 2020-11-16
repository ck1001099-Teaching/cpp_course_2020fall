#include <iostream>
#include <string>
using namespace std;

class Dog{
public:

private:

};

class Human{
public:
	string name;
	string bloodType;
	string birth;

	void SetLINEID(string ID){
		LINE_ID = ID;
	}

	string GetLINEID(string name){
		if (name == "小華"){
			return LINE_ID;
		} else {
			cout << "不告訴你！" << endl;
			return "";
		}		
	}
private:
	string LINE_ID;
};

int main(){

	//宣告「Human 類別」的物件，物件名稱為 h1
	Human h1;
	h1.name = "小王";
	h1.bloodType = "O";
	h1.birth = "1996/02/02";

	Human h2;
	h2.name = "小華";
	h2.bloodType = "AB";
	h2.birth = "1996/02/14";

	cout << h1.name << " " << h1.bloodType << " " << h1.birth << endl;
	cout << h2.name << " " << h2.bloodType << " " << h2.birth << endl;

	h1.SetLINEID("myntu");
	// h1.LINE_ID = "myntu"; 因為 LINE_ID 在 private member 裡，所以這行會 compile 不過
	
	cout << "小華跟小王拿 LINE ID ，小王的 LINE ID: " << h1.GetLINEID("小華") << endl;
	cout << "小明跟小王拿 LINE ID ，小王的 LINE ID: " << h1.GetLINEID("小明") << endl;

	return 0;
}












