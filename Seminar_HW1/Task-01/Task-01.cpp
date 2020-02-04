#include <iostream>
using namespace std;

int main()
{
	int leastDivisible = 2520;

	bool isDivisibleFound = false;

	while (!isDivisibleFound)
	{
		leastDivisible++;
		isDivisibleFound = true;

		for (int i = 1; i <= 18; i++)
		{
			if (leastDivisible % i != 0) {
				isDivisibleFound = false;
				break;
			}
		}
	}

	cout << leastDivisible;

	return 0;
}