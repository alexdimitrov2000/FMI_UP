#include <iostream>
using namespace std;

int main()
{
	int dayOfWeek;
	double hours, pricePerHour;

	cout << "Please, enter a day of week as a number from 1 to 7: ";
	cin >> dayOfWeek;

	while (dayOfWeek < 1 || dayOfWeek > 7)
	{
		cout << "Day of week must be a number between 1 and 7! Please, enter another number: ";
		cin >> dayOfWeek;
	}

	cout << "Please, enter the hours: ";
	cin >> hours;

	if (dayOfWeek == 1 || dayOfWeek == 3) {
		pricePerHour = 4.5;
	}
	else if (dayOfWeek == 2 || dayOfWeek == 4 || dayOfWeek == 5) {
		pricePerHour = 6;
	}
	else {
		pricePerHour = 8.25;
	}

	double totalPrice = pricePerHour * hours;

	cout << "Traicho has to pay " << totalPrice << " levs." << endl;

	return 0;
}