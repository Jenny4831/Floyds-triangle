#include<iostream>
using namespace std;

int main() {
	int n, x = 1;
	cout << "Input: \n";
	cin >> n;
	cout << "Floyd's triangle: " << endl;

	for (int i = 1; i < n + 1; i++) {
		for (int l = 0; l < i; l++) {
			cout << x << " ";
			x += 1;
		}
		cout << "\n";
	}

	return 0;
}