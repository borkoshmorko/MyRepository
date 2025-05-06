#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Въведете 5-цифрено число: ";cin >> num;
	while (num > 0) {
		cout << num % 10;
		num /= 10;
	}
}