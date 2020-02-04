#include <iostream>
using namespace std;

const int DEFAULT_STR_LENGTH = 50;

bool isLowercase(char symbol) {
	return symbol >= 'a' && symbol <= 'z';
}

bool stringContainsSymbol(char symbol, char* string) {
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == symbol) {
			return true;
		}
	}

	return false;
}

void modifyString(char* firstStr, char* secondStr) {
	char currentSymbol;

	for (int i = 0; firstStr[i] != '\0'; i++)
	{
		currentSymbol = firstStr[i];

		if (stringContainsSymbol(currentSymbol, secondStr) && isLowercase(currentSymbol)) {
			firstStr[i] -= ' ';
		}
	}
}

int main()
{
	char firstString[DEFAULT_STR_LENGTH];
	char secondString[DEFAULT_STR_LENGTH];

	cin >> firstString;
	cin >> secondString;

	modifyString(firstString, secondString);

	cout << firstString;
}