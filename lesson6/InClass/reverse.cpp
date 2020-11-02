#include <iostream>
using namespace std;

void reverse(char*);

int main(){
	char str[200];
	cin >> str;
	reverse(str);
	cout << str << endl;
	return 0;
}

void reverse(char* str){
	char tmp[200];
	//////////////////////////
	// COPY from str to tmp //
	//////////////////////////
	int i = 0;
	// *(str+i) == str[i]
	while (*(str+i) != '\0'){
		*(tmp+i) = *(str+i);
		i = i + 1;
	}
	// REVERSE
	// str[0] = tmp[i-1]
	// str[1] = tmp[i-2]
	// ...
	// str[i] = tmp[0]
	for (int j = 0 ; j < i ; j++){
		*(str+j) = *(tmp+i-1-j);
		// *(tmp+i-1-j) == tmp[i-1-j]
	}
}