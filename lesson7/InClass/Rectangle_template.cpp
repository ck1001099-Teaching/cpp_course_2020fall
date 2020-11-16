#include <iostream>
using namespace std;

// - 建立一個長方形 (Rectangle)類別，其資料成員與成員函數如下：
//   - 定義private資料成員length與width，分別存放長方形的長和寬。
//   - 定義public成員函數setLength與getLength，用來設定與取得length。
//   - 定義public成員函數setWidth與getWidth，用來設定與取得width 。
//   - 定義public成員函數perimeter與area，分別用來計算長方形的周長與面積。
// - 撰寫main()函數，由鍵盤輸入資料，分別存入length與width中，然後計算並顯示長方形周長與面積。

/* implement */
class Rectangle{
public:
	void setLength(int);
	int getLength();
	void setWidth(int);
	int getWidth();
	int perimeter();
	int area();
private:
	int length;
	int width;
};

int Area(int w, int l){
	return w * l;
}

int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;

	cout << Area(2, 4) << endl;
	cout << Area(10, 10) << endl;

	return 0;
}

void Rectangle::setLength(int l){
	length = l;
}
int Rectangle::getLength(){
	return length;
}
void Rectangle::setWidth(int w){
	width = w;
}
int Rectangle::getWidth(){
	return width;
}
int Rectangle::perimeter(){
	return 2 * (length + width);
}
int Rectangle::area(){
	return length * width;
}