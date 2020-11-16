#include <iostream>
using namespace std;

/* implement */
class Rectangle{
public:
	void setLength(int l){ length = l; }
	int getLength(){ return length; }
	void setWidth(int w){ width = w; }
	int getWidth(){ return width; }
	int perimeter(){ return 2 * (width + length); }
	int area(){ return width * length; }
private:
	int length;
	int width;
};


int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;
	return 0;
}