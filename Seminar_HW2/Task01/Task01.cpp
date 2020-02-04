#include <iostream>
using namespace std;

const int DEFAULT_STR_LENGTH = 50;

bool stringContainsSymbol(char symbol, char* string) {
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == symbol) {
			return true;
		}
	}
	
	return false;
}

bool secondContainsAllFirstSymbols(char* firstStr, char* secondStr) {
	if (firstStr[0] == '\0') {
		return true;
	}

	char currentSymbol = firstStr[0];

	if (!stringContainsSymbol(currentSymbol, secondStr)) {
		return false;
	}

	return secondContainsAllFirstSymbols(firstStr + 1, secondStr);
}

int main()
{
	char firstString[DEFAULT_STR_LENGTH];
	char secondString[DEFAULT_STR_LENGTH];

	cin >> firstString;
	cin >> secondString;

	cout << (secondContainsAllFirstSymbols(firstString, secondString) ? "Yes" : "No") << endl;
}