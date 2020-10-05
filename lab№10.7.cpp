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
	if ( (a + b > c) && (a + c > b) && (b + c > a)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
