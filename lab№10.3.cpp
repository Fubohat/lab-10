#include <iostream>
using namespace std;
int main() {
	int A;
	cout << "A=";
	cin >> A;
	if (((A / 100) == 0) && ((A / 10) > 0) && (A % 2 == 0)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
