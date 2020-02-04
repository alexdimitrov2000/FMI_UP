#include <iostream>
using namespace std;

const int DEFAULT_ARR_LENGTH = 50;
const int VERY_SMALL_NUMBER = -999999;

int getMaxElement(int* arr, int size, int currentMax = VERY_SMALL_NUMBER) {
	if (size == 0)
	{
		return currentMax;
	}

	if (arr[size - 1] > currentMax)
	{
		currentMax = arr[size - 1];
	}

	return getMaxElement(arr, size - 1, currentMax);
}

int main()
{
	int arr[DEFAULT_ARR_LENGTH];
	int size;

	cout << "Please, enter the size of the array: ";
	cin >> size;

	while (size > DEFAULT_ARR_LENGTH)
	{
		cout << "Make sure the size is less than " << DEFAULT_ARR_LENGTH << ". Please, enter another number: ";
		cin >> size;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Enter element at position " << i << ": ";
		cin >> arr[i];
	}

	int maxElement = getMaxElement(arr, size);

	cout << "The largest element in the array is: " << maxElement;
}