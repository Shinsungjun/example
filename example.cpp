#include <iostream>
using namespace std;

int main() {
	int result = 0;
	int number;
	for (int i = 0; i < 6; i++) {
		result += i;
	}
	cout << result << endl;
	number = result;
	return 0;
}