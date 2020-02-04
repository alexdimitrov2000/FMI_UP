#include <iostream>
using namespace std;

const int BINARY_ARRAY_SIZE = 32;

int main()
{
	int number, index, lastDigit;
	int binaryNum[BINARY_ARRAY_SIZE];
	bool isNumberPalindrome, isBinaryNumberPalindrome;

	int sum = 0;

	for (int i = 1; i <= 999; i++)
	{
		number = i;
		isNumberPalindrome = true;

		lastDigit = number % 10;

		if (number >= 10 && number <= 99) {
			isNumberPalindrome = lastDigit == number / 10;
		}
		else if (number >= 100) {
			isNumberPalindrome = lastDigit == number / 100;
		}
		
		index = 0;

		if (isNumberPalindrome) {
			while (number > 0)
			{
				binaryNum[index] = number % 2;
				number /= 2;
				index++;
			}

			if (binaryNum[index - 1] != 0) {
				isBinaryNumberPalindrome = true;
				for (int j = 0; j < index / 2; j++)
				{
					if (binaryNum[j] != binaryNum[index - j - 1]) {
						isBinaryNumberPalindrome = false;
						break;
					}
				}

				if (isBinaryNumberPalindrome) {
					sum += i;
				}
			}
		}
	}

	cout << "Sum of all palindromes: " << sum << endl;

	return 0;
}