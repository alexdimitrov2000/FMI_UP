#include <iostream>
#include <cmath>
using namespace std;

const int DEFAULT_SIZE = 30;

int main()
{
	long long int cardNumber;
	cout << "Please, enter a card number: ";
	cin >> cardNumber;

	int digit, digitsCnt = 0, sum = 0;
	int numberDigits[DEFAULT_SIZE];
	while (cardNumber > 0)
	{
		digit = cardNumber % 10;
		cardNumber /= 10;
		numberDigits[digitsCnt] = digit;
		digitsCnt++;
	}

	bool isCardValid = false;
	if (digitsCnt % 2 == 0) {
		int index = digitsCnt - 1;
		while (index >= 0)
		{
			digit = numberDigits[index];
			sum += (index % 2 != 0) ? digit : (pow(digit, 2));
			index--;
		}

		if (sum % 3 == 0) {
			isCardValid = true;
		}
	}

	isCardValid ? cout << "Valid credit card!" : cout << "Fake credit card!";

	return 0;
}