#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int tmp;

	ifstream myFile;
	myFile.open("file.txt", ios::in); // d:\\textIn.txt
	if (!myFile){ // myFile.is_open()
		cout << "開啟檔案失敗" << endl;
		return 0;
	}
	myFile >> tmp;
	cout << tmp << endl;
	myFile.close();

	ofstream myFile2;
	myFile2.open("file2.txt", ios::out);
	if (!myFile2){ // myFile.is_open()
		cout << "開啟檔案失敗" << endl;
		return 0;
	}
	myFile2 << tmp << endl;
	myFile2 << "Hello World!" << endl;
	myFile2.close();
	
	return 0;
}