#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	int firstHours = firstNumber / 100;
	int firstMinutes = firstNumber % 100;
	bool isFirstNumValid = firstHours >= 0 && firstHours <= 24 && firstMinutes >= 0 && firstMinutes <= 60;

	int secondHours = secondNumber / 100;
	int secondMinutes = secondNumber % 100;
	bool isSecondNumValid = secondHours >= 0 && secondHours <= 24 && secondMinutes >= 0 && secondMinutes <= 60;

	if (!isFirstNumValid || !isSecondNumValid) {
		cout << "Invalid" << endl;
	}
	else {
		while (firstHours >= 12) {
			firstHours -= 12;
		}

		while (secondHours >= 12)
		{
			secondHours -= 12;
		}

		int hours = 0;
		int minutesDiff = (firstMinutes > secondMinutes ? firstMinutes - secondMinutes : secondMinutes - firstMinutes);
		if (firstHours <= secondHours && firstMinutes > secondMinutes) {
			minutesDiff = (60 - firstMinutes) + secondMinutes;
			firstHours++;
			firstHours = firstHours == 12 ? 0 : firstHours;
			firstMinutes = 0;
			hours = secondHours - firstHours;
		}
		else if (firstHours <= secondHours && firstMinutes <= secondMinutes) {
			minutesDiff = secondMinutes - firstMinutes;
			hours = secondHours - firstHours;
		}
		else if (secondHours <= firstHours && firstMinutes > secondMinutes) {
			minutesDiff = (60 - firstMinutes) + secondMinutes;
			firstMinutes = 0;
			hours = firstHours - secondHours;
		}
		else if (secondHours <= firstHours && firstMinutes <= secondMinutes) {
			minutesDiff = secondMinutes - firstMinutes;
			hours = firstHours - secondHours;
		}

		if (hours < 10) {
			cout << "0" << hours;
		}
		else {
			cout << hours;
		}

		if (minutesDiff < 10) {
			cout << "0" << minutesDiff;
		}
		else {
			cout << minutesDiff;
		}

		cout << endl;
	}
}