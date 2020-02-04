#include <iostream>
using namespace std;

const int DEFAULT_ARRAY_SIZE = 20;

int main()
{
	int number;
	cin >> number;

	int index = 0;
	int numberArr[DEFAULT_ARRAY_SIZE];
	while (number > 0)
	{
		numberArr[index] = number % 10;
		index++;
		number /= 10;
	}

	int sum = 0;

	int endPoint = index % 2 == 0 ? index / 2 : (index / 2) + 1;
	for (int i = 0; i < endPoint; i++)
	{
		sum += numberArr[index - 1 - i] * numberArr[i];
	}

	cout << "Sum of positions' products: " << sum << endl;

	return 0;
}