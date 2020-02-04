#include <iostream>
using namespace std;

const int DEFAULT_MATRIX_SIZE = 50;

void inputMatrix(int matrix[][DEFAULT_MATRIX_SIZE], int size) {
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cin >> matrix[row][col];
		}
	}
}

void rotateMatrix(int matrix[][DEFAULT_MATRIX_SIZE], int matrixSize, int rotationsCnt) {
	for (int i = 0; i < rotationsCnt; i++)
	{
		int temp = matrix[0][0];
		matrix[0][0] = matrix[matrixSize - 1][0];
		matrix[matrixSize - 1][0] = matrix[matrixSize - 1][matrixSize - 1];
		matrix[matrixSize - 1][matrixSize - 1] = matrix[0][matrixSize - 1];
		matrix[0][matrixSize - 1] = temp;

		temp = matrix[1][1];
		matrix[1][1] = matrix[1][matrixSize - 2];
		matrix[1][matrixSize - 2] = matrix[matrixSize - 2][matrixSize - 2];
		matrix[matrixSize - 2][matrixSize - 2] = matrix[matrixSize - 2][1];
		matrix[matrixSize - 2][1] = temp;
	}
}

int main()
{
	int rotations, matrixSize, matrix[DEFAULT_MATRIX_SIZE][DEFAULT_MATRIX_SIZE];
	cout << "Please, enter the number of rotations: ";
	cin >> rotations;

	cout << "Please, enter the size of the matrix: ";
	cin >> matrixSize;

	inputMatrix(matrix, matrixSize);

	rotateMatrix(matrix, matrixSize, rotations);

	cout << endl << "Matrix after rotations:" << endl;

	for (int row = 0; row < matrixSize; row++)
	{
		for (int col = 0; col < matrixSize; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
}