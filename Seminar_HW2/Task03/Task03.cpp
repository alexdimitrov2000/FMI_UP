#include <iostream>
using namespace std;

int getWordLength(char* word) {
	int length = 0;

	for (int i = 0; word[i] != ' ' && word[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

int getStringLength(char* word) {
	int length = 0;

	for (int i = 0; word[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

char* getLongestWordPointer(char* str) {
	int currentWordIndex = 0, longestWordIndex = 0;
	int longestWordLength = 0, wordLength = 0;
	int stringLength = getStringLength(str);

	for (int i = 0; i < stringLength; i++)
	{
		currentWordIndex = i;
		wordLength = getWordLength(str + currentWordIndex);

		if (wordLength > longestWordLength)
		{
			longestWordLength = wordLength;
			longestWordIndex = currentWordIndex;
		}
		i += wordLength;
	}

	cout << "Index of the longest word is: " << longestWordIndex << endl;

	return str + longestWordIndex;
}

int main()
{
	char string[256];

	cin.getline(string, 256);

	char* pointer = getLongestWordPointer(string);

	cout << pointer << endl;
}