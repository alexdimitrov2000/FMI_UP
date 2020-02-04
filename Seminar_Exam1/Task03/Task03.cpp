#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int leftTriangleSpaces = 0, rightTriangleSpaces = num - 3;
	for (int rows = 1; rows <= num; rows++)
	{
		for (int spaces = 0; spaces < num - rows; spaces++)
		{
			cout << " ";
		}
		cout << "*";
		if (rows == 1 || rows == num) {
			for (int i = 0; i <= (2 * num) - 2; i++)
			{
				cout << " *";
			}
		}
		else {
			for (int i = 0; i < leftTriangleSpaces; i++)
			{
				cout << " ";
			}
			cout << "*";

			for (int i = 0; i <= (3 * num) - 3; i++)
			{
				cout << " ";
			}

			cout << "*";
			for (int i = 0; i < rightTriangleSpaces; i++)
			{
				cout << " ";
			}

			cout << "*";

			leftTriangleSpaces++;
			rightTriangleSpaces--;
		}

		cout << endl;
	}
}