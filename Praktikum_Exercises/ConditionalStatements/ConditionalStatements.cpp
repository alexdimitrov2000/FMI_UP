#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	// Task 01
	/*int a, b, c, max;
	cin >> a >> b >> c;

	if (a >= b) {
		max = a;
	}
	else {
		max = b;
	}

	if (b >= c) {
		max = b;
	}
	else {
		max = c;
	}

	cout << "The largest number is: " << max << endl;*/

	// Task 02
	//int a, b, c;

	// Task 03
	/*int year;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << "The year " << year << " is leap" << endl;
	}
	else {
		cout << "The year " << year << " is not leap" << endl;
	}*/

	// Task 10
	/*char symbol;

	cin >> symbol;

	int asciiCode = (int)symbol;

	if (asciiCode >= 97 && asciiCode <= 122) {
		cout << symbol << " is a lowercase letter" << endl;
	}
	else if (asciiCode >= 65 && asciiCode <= 90) {
		cout << symbol << " is an uppercase letter" << endl;
	}
	else if (asciiCode >= 48 && asciiCode <= 57) {
		cout << symbol << " is a digit" << endl;
	}*/

	// Task 11
	int month, day, daysTillNewYear;

	cin >> month >> day;

	if (month < 1 || month > 12) {
		cout << "There is no such month" << endl;
		return 0;
	}

	if (day < 1 || day > 31) {
		cout << "There is no such day" << endl;
		return 0;
	}

	int leftMonths = 12 - month;

	if (month == 1) {
		daysTillNewYear = (31 - day) + 29 + 6 * 31 + 4 * 30;
	}
	else if (month == 2) {
		daysTillNewYear = (29 - day) + 6 * 31 + 4 * 30;
	}
	else if ((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0)) {
		int longMonths = leftMonths != 0 ? (leftMonths + 1) / 2 : 0;
		int shortMonths = leftMonths != 0 ? (leftMonths - 1) / 2 : 0;

		daysTillNewYear = (31 - day) + longMonths * 31 + shortMonths * 30;
	}
	else if (month >= 8 && month % 2 == 0) {

	}
	else {
		daysTillNewYear = (30 - day);
	}
}