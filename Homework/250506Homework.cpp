#include <iostream>
using namespace std;

static void task1() {
	int n, i = 0, sum = 0;
	cout << "How many numbers do you want to enter? (0 - 100): ";cin >> n;
	int* numbers = new int[n];
	cout << "Enter your numbers: ";
	while (i < n) {
		cin >> numbers[i];
		i++;
		if (numbers[i] > 0) sum += numbers[i];
	}
	cout << "The sum of the positive numbers is " << sum << '.' << endl;
}

static void task2() {
	int n, x, j = 0, count = 0;
	cout << "How many numbers do you want to enter? (0 - 100): ";cin >> n;
	int* numbers = new int[n];
	cout << "Enter your numbers: ";
	for (int i = 0;i < n;i++) {
		cin >> numbers[i];
	}
	cout << "Which number are you searching for?: ";cin >> x;
	while (j < n) {
		if (numbers[j] == x) {
			count++;
		}
	}
	if (count > 0) cout << "\n" << x << " was found " << count << " times in the array.";
	else cout << "\n" << x << " was not found anywhere in the array.";
}

int main() {
	task1();
	//task2();

	cout << "\n\n";
	return 0;
}