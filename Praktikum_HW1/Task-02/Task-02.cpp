#include <iostream>
using namespace std;

int main()
{
	int sideSize;
	cout << "Please, enter the size of the Chess board side: ";
	cin >> sideSize;

	for (int i = 0; i < sideSize; i++)
	{
		cout << '|';
		for (int j = 0; j < sideSize; j++)
		{
			if (i % 2 == 0) {
				j % 2 == 0 ? cout << '#' : cout << ' ';
			}
			else {
				j % 2 == 0 ? cout << ' ' : cout << '#';
			}
		}
		cout << '|' << endl;
	}

	return 0;
}