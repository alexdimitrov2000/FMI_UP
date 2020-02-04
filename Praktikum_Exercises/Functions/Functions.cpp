#include <iostream>
using namespace std;

int pow(int num1, int num2) {
	int result = 1;

	for (int i = 0; i < num2; i++)
	{
		result *= num1;
	}

	return result;
}

int max(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}

	return num2;
}

int max(int num1, int num2, int num3) {
	int largerOfFirstTwoNums = max(num1, num2);

	if (num3 > largerOfFirstTwoNums) {
		return num3;
	}

	return largerOfFirstTwoNums;
}

bool isLetter(char symbol) {
	return (symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z');
}

bool isDigit(char symbol) {
	return (symbol >= '0' && symbol <= '9');
}

int digitSum(int number) {
	int digit, sumOfDigits = 0;

	while (number != 0)
	{
		digit = number % 10;
		number /= 10;

		sumOfDigits += digit;
	}

	return sumOfDigits;
}

bool isPrime(int num) {
	bool isPrime = true;

	double rootOfNum = sqrt(num);

	for (int i = 2; i <= rootOfNum; i++)
	{
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

bool arePaired(int num1, int num2) {
	if (isPrime(num1) && isPrime(num2)) {
		return (num1 + 2 == num2);
	}

	return false;
}

int reverseNumber(int num) {

}

int main()
{
	// FUNCTIONS
	// Task 01
	/*int num1, num2;
	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter power: ";
	cin >> num2;

	cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;*/

	// Task 02
	/*int num1, num2;
	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;

	cout << "The larger of the two numbers is: " << max(num1, num2) << endl;*/

	// Task 03
	/*int num1, num2, num3;
	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;
	cout << "Please enter third number: ";
	cin >> num3;

	cout << "The largest of the three numbers is: " << max(num1, num2, num3) << endl;*/

	// Task 04
	/*char symbol;
	cout << "Please, enter a symbol: ";
	cin >> symbol;

	cout << "Is the symbol a letter: " << boolalpha << isLetter(symbol) << endl;*/

	// Task 05
	/*char symbol;
	cout << "Please, enter a symbol: ";
	cin >> symbol;

	cout << "Is the symbol a digit: " << boolalpha << isDigit(symbol) << endl;*/

	// Task 06
	/*int num;
	cout << "Please, enter a number: ";
	cin >> num;

	int sumOfAllDigits = digitSum(num);

	cout << "The sum of the number's digits is " << sumOfAllDigits;*/

	// Task 07
	/*int num1, num2;
	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;

	cout << "Are the numbers paired: " << boolalpha << arePaired(num1, num2) << endl;*/

	// Task 08
	int nums[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}

	int reversedNum;
	for (int i = 0; i < 10; i++)
	{
		reversedNum = reverseNumber(nums[i]);
	}
}