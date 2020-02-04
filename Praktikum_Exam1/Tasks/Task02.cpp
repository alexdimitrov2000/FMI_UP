#include <iostream>
using namespace std;

const int DEFAULT_ARRAY_SIZE = 105;
const int DEFAULT_MERGED_ARRAY_SIZE = DEFAULT_ARRAY_SIZE * 2;

int main()
{
	int firstSize, secondSize, firstArray[DEFAULT_ARRAY_SIZE], secondArray[DEFAULT_ARRAY_SIZE];
	cout << "Please, enter a number in the range of [5, 105]: ";
	cin >> firstSize;
	while (firstSize < 5 || firstSize > 105)
	{
		cout << "Make sure the entered number is in the range [5, 105]: ";
		cin >> firstSize;
	}

	cout << "Enter the elements of the first array: ";
	for (int i = 0; i < firstSize; i++)
	{
		cin >> firstArray[i];
	}

	cout << "Please, enter another number in the range of [5, 105]: ";
	cin >> secondSize;
	while (secondSize < 5 || secondSize > 105)
	{
		cout << "Make sure the entered number is in the range [5, 105]: ";
		cin >> secondSize;
	}

	cout << "Enter the elements of the second array: ";
	for (int i = 0; i < secondSize; i++)
	{
		cin >> secondArray[i];
	}

	int currentElement, allOddNumbers[DEFAULT_MERGED_ARRAY_SIZE], allEvenNumbers[DEFAULT_MERGED_ARRAY_SIZE], mergedArray[DEFAULT_MERGED_ARRAY_SIZE];
	int evenCnt = 0, oddCnt = 0, mergedArrCnt = 0;

	// Separate all the even and odd numbers from the first array in arrays
	for (int i = 0; i < firstSize; i++)
	{
		currentElement = firstArray[i];

		if (currentElement % 2 == 0) {
			allEvenNumbers[evenCnt] = currentElement;
			evenCnt++;
		}
		else {
			allOddNumbers[oddCnt] = currentElement;
			oddCnt++;
		}
	}

	// Separate all the even and odd numbers from the second array in arrays
	for (int i = 0; i < secondSize; i++)
	{
		currentElement = secondArray[i];

		if (currentElement % 2 == 0) {
			allEvenNumbers[evenCnt] = currentElement;
			evenCnt++;
		}
		else {
			allOddNumbers[oddCnt] = currentElement;
			oddCnt++;
		}
	}

	// Add all the even elements to the merged array
	for (int i = 0; i < evenCnt; i++)
	{
		mergedArray[mergedArrCnt] = allEvenNumbers[i];
		mergedArrCnt++;
	}

	// Add all the odd numbers to the merged array
	for (int i = 0; i < oddCnt; i++)
	{
		mergedArray[mergedArrCnt] = allOddNumbers[i];
		mergedArrCnt++;
	}

	// Print the merged array
	for (int i = 0; i < mergedArrCnt; i++)
	{
		cout << mergedArray[i] << " ";
	}
}