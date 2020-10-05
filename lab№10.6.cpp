#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if ( (a*a + b*b == c*c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
		cout << "треугольник прямоугольный";
	}
	else {
		cout << "треугольник не прямоугольный";
	}
} 
