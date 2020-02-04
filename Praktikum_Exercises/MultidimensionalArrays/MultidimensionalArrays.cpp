#include <iostream>
using namespace std;

const int DEFAULT_SIZE = 50;
const int DEFAULT_SUDOKU_MATRIX = 9;

int main()
{
	// Arrays - Task01
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

	int temp = 0;

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << " ";
	}*/

	// Multidimensional Arrays - Task 01
	/*int arr[4][4] = { {1,2,3,4}, {7,13,0,5}, {11,5,15,6}, {10,9,4,7} };
	int sum = 0;
	double numOfElements = 0.0;
	double average = 0.0;

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			numOfElements++;
			sum += arr[row][col];
		}
	}

	cout << "Sum of elements: " << sum << endl;

	average = sum / numOfElements;
	cout << "Average of matrix elements: " << average << endl;*/

	// Task 02
	/*int arr[6][5] = { {48,72,13,14,15}, {21,22,53,24,75}, {31,57,33,34,35}, {41,95,42,44,45}, {59,52,53,54,55}, {61,69,63,64,65} };
	int max = arr[0][0];
	int min = arr[0][0];

	int currentElement;
	for (int row = 0; row < 6; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			currentElement = arr[row][col];
			if (currentElement > max) {
				max = currentElement;
			}
			if (currentElement < min) {
				min = currentElement;
			}
		}
	}

	cout << "Max element: " << max << endl;
	cout << "Min element: " << min << endl;*/

	// Task 03
	//int arraySquareSize;
	//cout << "Please, enter the size of the matrix: ";
	//cin >> arraySquareSize;
	//int arr[DEFAULT_SIZE][DEFAULT_SIZE];

	//for (int row = 0; row < arraySquareSize; row++)
	//{
	//	for (int col = 0; col < arraySquareSize; col++)
	//	{
	//		cin >> arr[row][col];
	//	}
	//}

	//// Print main diagonal
	//cout << "Main diagonal: ";
	//for (int i = 0; i < arraySquareSize; i++)
	//{
	//	cout << arr[i][i] << " ";
	//}
	//cout << endl;

	//// Print secondary diagonal
	//cout << "Secondary diagonal: ";
	//int index = 0;
	//for (int i = 0; i < arraySquareSize; i++)
	//{
	//	index = arraySquareSize - 1 - i;
	//	cout << arr[i][index] << " ";
	//}

	// Task 04
	//int arraySquareSize;
	//cout << "Please, enter the size of the matrix: ";
	//cin >> arraySquareSize;
	//int arr[DEFAULT_SIZE][DEFAULT_SIZE];

	//for (int row = 0; row < arraySquareSize; row++)
	//{
	//	for (int col = 0; col < arraySquareSize; col++)
	//	{
	//		cin >> arr[row][col];
	//	}
	//}

	//int underDiagSum = 0;
	//int aboveDiagSum = 0;

	//// Calculate the sum of elements under the main diagonal
	//for (int i = 0; i < arraySquareSize; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		underDiagSum += arr[i][j];
	//	}
	//}

	//// Calculate the sum of elements above the main diagonal
	//for (int i = 0; i < arraySquareSize; i++)
	//{
	//	for (int j = i + 1; j < arraySquareSize; j++)
	//	{
	//		aboveDiagSum += arr[i][j];
	//	}
	//}

	//cout << "Sum under diagonal: " << underDiagSum << endl;
	//cout << "Sum over diagonal: " << aboveDiagSum << endl;

	// Task 05
	/*int arr[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl;
	int rotatedMatrix[4][4];

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			rotatedMatrix[col][row] = arr[4 - 1 - row][col];
		}
	}

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << rotatedMatrix[row][col] << " ";
		}
		cout << endl;
	}*/

	// BONUS Task 01
	int arraySquareSize;
	int arr[DEFAULT_SUDOKU_MATRIX][DEFAULT_SUDOKU_MATRIX];

	for (int row = 0; row < DEFAULT_SUDOKU_MATRIX; row++)
	{
		for (int col = 0; col < DEFAULT_SUDOKU_MATRIX; col++)
		{
			cin >> arr[row][col];
		}
	}

	int currentZeroCoords[2];
	int missingNum;
	int currentNum;
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			currentNum = arr[row][col];
			if (currentNum == 0)
			{
				currentZeroCoords[0] = row;
				currentZeroCoords[1] = col;
			}
		}
		cout << endl;
	}
}