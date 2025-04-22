#include <iostream>
using namespace std;

int main() {
	int n, max = 0, secondMax = 0;
	cout << "How many numbers do you want to enter?: ";cin >> n;
	int* numbers = new int[n];
	cout << "Enter your numbers: ";
	for (int i = 0;i < n;i++) {
		cin >> numbers[i];
		if (numbers[i] > max) {
			max = numbers[i];
		}

		if (numbers[i] < max && numbers[i] > secondMax) {
			secondMax = numbers[i];
		}
	}
	cout << "The second highest number is " << secondMax << ".";

	delete[] numbers;
}