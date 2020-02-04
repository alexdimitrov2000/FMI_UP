#include <iostream>
using namespace std;

// Function that checks if a number contains the digit 5
bool containsDigitFive(int num) {
	if ((num >= 50 && num <= 59) || (num >= 15 && num <= 95 && num % 10 == 5)) {
		return true;
	}

	while (num != 0) {
		if (num % 10 == 5) {
			return true;
		}

		num /= 10;
	}

	return false;
}

// Function that returns all the digits 5, contained in a number
int getNumberOfFives(int num) {
	int countOfDigits = 0;

	while (num != 0)
	{
		if (num % 10 == 5) {
			countOfDigits++;
		}

		num /= 10;
	}

	return countOfDigits;
}

int main()
{
	int num1, num2;
	cout << "Please, enter a number in the range of [10, 1000]: ";
	cin >> num1;
	while (num1 < 10 || num1 > 1000)
	{
		cout << "Make sure the entered number is in the range [10, 1000]: ";
		cin >> num1;
	}

	cout << "Please, enter another number in the range of [10, 1000]: ";
	cin >> num2;
	while (num2 < 10 || num2 > 1000)
	{
		cout << "Make sure the entered number is in the range [10, 1000]: ";
		cin >> num2;
	}

	int numberOfFives = 0;

	for (int i = num1; i <= num2; i++)
	{
		if (containsDigitFive(i))
		{
			numberOfFives += getNumberOfFives(i);
		}
	}

	cout << "The number of fives in the range is: " << numberOfFives << endl;
}