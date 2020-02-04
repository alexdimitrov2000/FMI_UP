#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;

	bool isDivisorFound = false;

	for (int i = 2; i <= firstNum / 2; i++)
	{
		if (firstNum % i == 0) {
			int poweredDivisor = i * i;

			if (secondNum % poweredDivisor == 0) {
				isDivisorFound = true;
				break;
			}
		}
	}

	cout << (isDivisorFound ? "Yes" : "No") << endl;
}