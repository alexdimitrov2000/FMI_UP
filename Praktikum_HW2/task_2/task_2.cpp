#include <iostream>
using namespace std;

const int MAX_STRING_LENGTH = 15;

bool stringContainsSymbol(char symbol, char* string) {
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == symbol) {
			return true;
		}
	}

	return false;
}

void printSpaces(int spacesCnt) {
	for (int i = 0; i < spacesCnt; i++)
	{
		cout << " ";
	}
}

void printStrings(char* firstStr, char* secondStr) {
	char currentLetter, commonLetter;
	int commonLetterIndex;
	bool hasCommonLetters = false;
	for (int i = 0; firstStr[i] != '\0'; i++)
	{
		currentLetter = firstStr[i];

		if (stringContainsSymbol(currentLetter, secondStr)) {
			hasCommonLetters = true;
			commonLetter = currentLetter;
			commonLetterIndex = i;
			break;
		}
	}

	if (hasCommonLetters)
	{
		for (int i = 0; secondStr[i] != '\0'; i++)
		{
			currentLetter = secondStr[i];
			if (currentLetter == commonLetter)
			{
				for (int j = 0; firstStr[j] != '\0'; j++)
				{
					cout << firstStr[j];
				}
				cout << endl;

				commonLetter = '0';
				continue;
			}

			printSpaces(commonLetterIndex);
			cout << currentLetter << endl;
		}
	}
	else {
		int firstStrLen = 0;
		for (int i = 0; firstStr[i] != '\0'; i++)
		{
			cout << firstStr[i];
			firstStrLen++;
		}
		cout << endl;

		for (int i = 0; secondStr[i] != '\0'; i++)
		{
			printSpaces(firstStrLen + 1);
			cout << secondStr[i] << endl;
		}
	}
}

int main()
{
	char firstStr[MAX_STRING_LENGTH], secondStr[MAX_STRING_LENGTH];
	cin >> firstStr;
	cin >> secondStr;

	printStrings(firstStr, secondStr);
}