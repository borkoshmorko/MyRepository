#include <iostream>
using namespace std;

int main() {
	int num, sum = 0;
	cout << "Enter a number: ";cin >> num;
	while (num > 0) {
		sum += num % 10;
		num / 10;
	}
	cout << "The sum of the digits of the number is" << sum;
}