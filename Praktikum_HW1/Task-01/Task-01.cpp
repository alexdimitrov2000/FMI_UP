#include <iostream>
using namespace std;

const int DEFAULT_SIZE = 50;

int main()
{
	int arrayLength, rotationsCnt;

	cout << "Please, enter the number of elements: ";
	cin >> arrayLength;

	int arr[DEFAULT_SIZE];

	while (arrayLength > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arrayLength;
	}

	cout << "Please, enter the number of rotations: ";
	cin >> rotationsCnt;

	for (int i = 0; i < arrayLength; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	int temp;

	for (int i = 0; i < rotationsCnt; i++)
	{
		temp = arr[0];
		for (int j = 0; j < arrayLength - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[arrayLength - 1] = temp;
	}

	for (int i = 0; i < arrayLength; i++)
	{
		cout << arr[i] << ", ";
	}

	return 0;
}