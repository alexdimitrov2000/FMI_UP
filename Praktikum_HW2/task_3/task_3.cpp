#include <iostream>
using namespace std;

const int DEFAULT_STRING_LENGTH = 50;

int stringLength(char* string) {
	int length = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

char* concatStrings(char* firstStr, char* secondStr) {
	int index = stringLength(firstStr);

	for (int i = 0; secondStr[i] != '\0'; i++)
	{
		firstStr[index] = secondStr[i];
		index++;
	}

	firstStr[index] = '\0';

	return firstStr;
}

int main()
{
	char firstStr[DEFAULT_STRING_LENGTH], secondStr[DEFAULT_STRING_LENGTH];
	cin >> firstStr;
	cin >> secondStr;

	char* concatenatedStr = concatStrings(firstStr, secondStr);

	cout << "Concatenated string: ";
	cout << concatenatedStr;
}