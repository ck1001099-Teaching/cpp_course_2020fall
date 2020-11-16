#include <iostream>
using namespace std;

class Circle{
public:
	void SetRadius(double);
	double GetRadius();
	double GetParimeter();
	double GetArea();
private:
	double radius;
	double parimeter;
	double area;
};

int main(){

	Circle c1;
	c1.SetRadius(6);
	cout << "半徑: " << c1.GetRadius()
		 << "周長: " << c1.GetParimeter()
		 << "面積: " << c1.GetArea() << endl;

	return 0;
}

void Circle::SetRadius(double newRadius){
	radius = newRadius;
	parimeter = 2.0 * 3.14 * radius;
	area = 3.14 * radius * radius;
}

double Circle::GetRadius(){
	return radius;
}

double Circle::GetParimeter(){
	return parimeter;
}

double Circle::GetArea(){
	return area;
}