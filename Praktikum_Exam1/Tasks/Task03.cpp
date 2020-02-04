#include <iostream>
using namespace std;

const int DEFAULT_SIZE = 50;

int getEnteredElement() {
	int element;
	cout << "Enter an element: ";
	cin >> element;
	while (element < -999 || element > 999)
	{
		cout << "Make sure the entered number is in the range [-999, 999]: ";
		cin >> element;
	}

	return element;
}

int main()
{
	int matrixSize;
	cout << "Please, enter the size of the matrix: ";
	cin >> matrixSize;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];

	cout << "Now it's time to enter all the elements of the matrix. Please, have patience... " << endl;

	// Enter the elements of the matrix
	for (int row = 0; row < matrixSize; row++)
	{
		for (int col = 0; col < matrixSize; col++)
		{
			matrix[row][col] = getEnteredElement();
		}
	}

	int currentElement, sumOfNegativesUnderMainDiag = 0, sumOfPositivesAboveMainDiag = 0;

	// Calculate the sum of negative elements under the main diagonal
	for (int i = 0; i < matrixSize; i++)
	{
		for (int j = 0; j < i; j++)
		{
			currentElement = matrix[i][j];
			if (currentElement < 0)
			{
				sumOfNegativesUnderMainDiag += currentElement;
			}
		}
	}

	// Calculate the sum of the positive elements above the main diagonal
	for (int i = 0; i < matrixSize; i++)
	{
		for (int j = i + 1; j < matrixSize; j++)
		{
			currentElement = matrix[i][j];
			if (currentElement > 0)
			{
				sumOfPositivesAboveMainDiag += currentElement;
			}
		}
	}

	cout << "The sum of all the negative numbers under the main diagonal is: " << sumOfNegativesUnderMainDiag << endl;
	cout << "The sum of all the positive numbers above the main diagonal is: " << sumOfPositivesAboveMainDiag << endl;
}