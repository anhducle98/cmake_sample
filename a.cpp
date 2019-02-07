#include <iostream>
#include <b.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << B(a, b).sum() << endl;
	return 0;
}
