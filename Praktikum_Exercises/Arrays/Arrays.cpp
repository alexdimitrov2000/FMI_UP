#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int DEFAULT_SIZE = 50;

int main()
{
	cout << "Hello World! That is the Arrays application.\n";

	// Task 01
	/*int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	int min = arr[0], max = arr[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}

		if (arr[i] > max) {
			max = arr[i];
		}
	}

	int secondMin = max, secondMax = min;

	for (int i = 0; i < arraySize; i++)
	{
		if (arr[i] <= secondMin && arr[i] > min) {
			secondMin = arr[i];
		}

		if (arr[i] >= secondMax && arr[i] < max) {
			secondMax = arr[i];
		}
	}

	cout << "max: " << max << ", secondMax: " << secondMax << endl;
	cout << "min: " << min << ", secondMin: " << secondMin << endl;*/

	// Task 02
	/*int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	int currentElement;
	bool isUnique = true;

	for (int i = 0; i < arraySize; i++)
	{
		currentElement = arr[i];

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == currentElement) {
				isUnique = false;
				break;
			}
		}

		if (!isUnique) {
			break;
		}
	}

	cout << "Is array unique: " << boolalpha << isUnique;*/

	// Task 03
	/*int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	int searchedElement;
	cout << "Please, enter the number you want to search for: ";
	cin >> searchedElement;

	int foundCnt = 0;
	int positions[DEFAULT_SIZE];

	for (int i = 0; i < arraySize; i++)
	{
		if (arr[i] == searchedElement) {
			positions[foundCnt] = i;
			foundCnt++;
		}
	}

	if (foundCnt > 0) {
		cout << "Element " << searchedElement << " is found " << foundCnt << " times at positions: ";
		for (int i = 0; i < foundCnt; i++)
		{
			cout << positions[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Element " << searchedElement << " has not been found in the array." << endl;
	}*/

	// Task 04
	/*int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE], lessThanAvgArr[DEFAULT_SIZE], higherThanAvgArr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	int arrayElementsSum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
		arrayElementsSum += arr[i];
	}

	double average = arrayElementsSum / (arraySize * 1.0);

	int currentElement, currentDiff, closestDiff = 20, closestElement = arr[0];

	for (int i = 0; i < arraySize; i++)
	{
		currentElement = arr[i];
		currentDiff = abs(average - currentElement);
		if (currentDiff < closestDiff) {
			closestElement = currentElement;
			closestDiff = currentDiff;
		}
	}

	int lessInd = 0, highInd = 0;

	for (int i = 0; i < arraySize; i++)
	{
		currentElement = arr[i];
		if (currentElement < closestElement) {
			lessThanAvgArr[lessInd] = currentElement;
			lessInd++;
		}
		else {
			higherThanAvgArr[highInd] = currentElement;
			highInd++;
		}
	}

	cout << closestElement << endl;
	for (int i = 0; i < lessInd; i++)
	{
		cout << lessThanAvgArr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < highInd; i++)
	{
		cout << higherThanAvgArr[i] << ' ';
	}*/

	// Task 05
	/*int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	bool isSmooth = true;
	for (int i = 0; i < arraySize / 2; i++)
	{
		if (arr[i] != arr[arraySize - i - 1]) {
			isSmooth = false;
			break;
		}
	}

	cout << boolalpha << isSmooth;*/

	// Bonus Task 02
	int arraySize;

	cout << "Please, enter the number of elements: ";
	cin >> arraySize;

	int arr[DEFAULT_SIZE];

	while (arraySize > DEFAULT_SIZE) {
		cout << "The number of elements must be less than " << DEFAULT_SIZE << endl;
		cout << "Please, enter the number of elements: ";
		cin >> arraySize;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter element No. " << i + 1 << ": ";
		cin >> arr[i];
	}

	// TODO

	return 0;
}