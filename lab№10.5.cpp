#include <iostream>
using namespace std;
int main() {
	int A, a1, a2, a3, a4;
	cout << "A=";
	cin >> A;
	a1 = A % 10;
	a2 = (A/10) % 10;
	a3 = (A / 100) % 10;
	a4 = (A / 1000) % 10;
	if ((a1 ==a4) && (a2 == a3)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
