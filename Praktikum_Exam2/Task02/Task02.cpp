#include <iostream>
using namespace std;

const int DEFAULT_MATRIX_SIZE = 50;

int getRowSum(int row[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += row[i];
	}

	return sum;
}

int getMainDiagSum(int matrix[][DEFAULT_MATRIX_SIZE], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

bool isMatrixMagic(int matrix[][DEFAULT_MATRIX_SIZE], int size)
{
	int firstRowSum = getRowSum(matrix[0], size);
	int currentRowSum;

	for (int i = 1; i < size; i++)
	{
		currentRowSum = getRowSum(matrix[i], size);

		if (currentRowSum != firstRowSum)
		{
			return false;
		}
	}

	int mainDiagSum = getMainDiagSum(matrix, size);

	return mainDiagSum == firstRowSum;
}

int main()
{
	int matrix[DEFAULT_MATRIX_SIZE][DEFAULT_MATRIX_SIZE];
	int size;

	cout << "Please, enter the size of the matrix: ";
	cin >> size;

	while (size > DEFAULT_MATRIX_SIZE)
	{
		cout << "Make sure the size is less than " << DEFAULT_MATRIX_SIZE << ". Please, enter another number: ";
		cin >> size;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter element at row " << i << " and column " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	cout << "Is matrix magic: " << boolalpha << isMatrixMagic(matrix, size);
}