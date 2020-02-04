#include <iostream>
using namespace std;

const int DEFAULT_MATRIX_ROWS = 50;
const int DEFAULT_MATRIX_COLS = 9;

void fillMatrixRows(int matrix[][DEFAULT_MATRIX_COLS], int number) {
	for (int i = 1; i < number; i++)
	{
		for (int j = 0; j < DEFAULT_MATRIX_COLS - 1; j++)
		{
			matrix[i][j] = matrix[i - 1][j + 1];
		}
		matrix[i][DEFAULT_MATRIX_COLS - 1] = matrix[i - 1][0];
	}
}

int main()
{
	int matrix[DEFAULT_MATRIX_ROWS][DEFAULT_MATRIX_COLS] = { {1, 2, 3, 4, 5, 6, 7, 8, 9} };

	int number;
	cout << "Please, enter a number: ";
	cin >> number;

	fillMatrixRows(matrix, number);

	for (int row = 0; row < number; row++)
	{
		for (int col = 0; col < DEFAULT_MATRIX_COLS; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
}