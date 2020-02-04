#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Hello World!\n";

	// Task 01
	/*int number, numberOfDigits;
	numberOfDigits = 0;
	cin >> number;
	int initialNumber = number;

	while (number > 0) {
		number = number / 10;
		numberOfDigits++;
	}

	cout << initialNumber << " has " << numberOfDigits << " digits" << endl;*/

	// Task 02
	/*int number;
	cin >> number;

	bool isSimple = true;

	if (number % 2 == 0) {
		isSimple = false;
		cout << boolalpha << isSimple << endl;
		return 0;
	}

	for (int i = number - 1; i > 1; i--)
	{
		if (number % i == 0) {
			isSimple = false;
			break;
		}
	}

	isSimple ? cout << "The number is simple" : cout << "The number is not simple";*/

	// Task 03
	/*int number, factorial;
	factorial = 1;

	cin >> number;

	for (int i = number; i >= 1; i--)
	{
		factorial *= i;
	}

	cout << factorial << endl;*/

	// Task 04
	/*int number;
	cin >> number;

	for (int i = number; i > 9; i--)
	{
		if (i % 7 == 0) {
			cout << i << " ";
		}
	}*/

	// Task 05
	/*int number;
	int count = 0;
	int sum = 0;
	cin >> number;

	while (number > 1)
	{
		count++;
		sum += number;
		cin >> number;
	}

	double average = sum / count;

	cout << "count = " << count << ", sum = " << sum << ", avg = " << average << endl;*/

	// Task 06
	/*int firstDigit, secondDigit, thirdDigit;

	for (int i = 100; i < 1000; i++)
	{
		firstDigit = i / 100;
		secondDigit = i / 10 % 10;
		thirdDigit = i % 10;

		if (firstDigit != secondDigit && secondDigit != thirdDigit && firstDigit != thirdDigit) {
			cout << i << " ";
		}
	}*/

	// Task 07
	//int firstNum = 0;
	//int secondNum = 1;
	//int currentNumber = 0;

	//cout << firstNum << " " << secondNum << " ";

	//for (int i = 0; i < 18; i++)
	//{
	//	currentNumber = firstNum + secondNum;
	//	firstNum = secondNum;
	//	secondNum = currentNumber;
	//	cout << currentNumber << " ";
	//}

	///*for (int i = 0; i < 18; i++)
	//{
	//	firstNum = firstNum + secondNum;
	//	secondNum = firstNum + secondNum;

	//	cout << firstNum << " ";
	//}*/

	// Task 08
	/*int number, sum = 0;
	cin >> number;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}

	cout << boolalpha << (sum == number);*/

	// Task 09
	/*int number, digit, sum = 0, counter = 0;
	cin >> number;
	int initialNumber = number;

	while (number > 0)
	{
		number /= 10;
		counter++;
	}

	number = initialNumber;

	for (int i = 0; i < counter; i++)
	{
		digit = number % 10;
		number /= 10;

		sum += pow(digit, counter);
	}

	cout << boolalpha << (sum == initialNumber);*/

	// Arrays Task 2 (nested loops)
	int number;
	cin >> number;

	for (int i = 0; i <= number; i++)
	{
		cout << ' ';
		for (int j = 0; j < number - i; j++) cout << ' ';
		for (int j = 0; j < i; j++) cout << '*';
		cout << ' ' << '|';
		
		cout << ' ';
		for (int j = 0; j < i; j++) cout << '*';
		for (int j = 0; j < number - i; j++) cout << ' ';
		cout << endl;
	}

	return 0;
}