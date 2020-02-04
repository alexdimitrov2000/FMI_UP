#include <iostream>
using namespace std;

const int DEFAULT_STRING_LENGTH = 50;

int getStringLength(char* string) {
	int length = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

bool isVowelLetter(char letter) {
	return letter == 'a' || letter == 'e' || letter == 'u' || letter == 'o' || letter == 'i';
}

void deleteLetterAtIndex(char* string, int index) {
	int stringLength = getStringLength(string);

	for (int i = index; i < stringLength - 1; i++)
	{
		string[i] = string[i + 1];
	}

	string[stringLength - 1] = '\0';
}

void modifyString(char* string) {
	int stringLength = getStringLength(string);
	char currentSymbol;

	for (int i = 1; i < stringLength; i++)
	{
		currentSymbol = string[i];

		if (isVowelLetter(currentSymbol) && isVowelLetter(string[i - 1]))
		{
			deleteLetterAtIndex(string, i);

			i--;
		}
	}
}

int main()
{
	char string[DEFAULT_STRING_LENGTH];

	cout << "Please, enter Ellie's nickname: ";
	cin >> string;

	modifyString(string);

	cout << "Modified string: " << string << endl;
	cout << "The length of the modified string is: " << getStringLength(string);
}