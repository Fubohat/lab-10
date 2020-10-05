#include <iostream>
using namespace std;
int main() {
	int A,B,C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	if ((A < B) && (B < C)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
