#include <iostream>
using namespace std;

int main()
{
	int sticks, pluvki, virbeli, oliveti, kuki, korda, friends;
	cin >> sticks >> pluvki >> virbeli >> oliveti >> kuki >> korda >> friends;

	bool readyForIskur = sticks >= 1 && pluvki >= 2 && virbeli >= 4 && oliveti >= 3 && kuki >= 3 && korda >= 150;
	bool readyForPchelina = sticks >= 2 && pluvki >= 3 && virbeli >= 5 && oliveti >= 6 && kuki >= 10 && korda >= 200 && friends >= 1;
	bool readyForPancharevo = sticks >= 5 && pluvki >= 6 && virbeli >= 12 && oliveti >= 7 && kuki >= 12 && korda >= 300 && friends >= 1;

	bool isReady = readyForIskur || readyForPancharevo || readyForPchelina;

	cout << (isReady ? "He can goe fishing" : "He cannot go fishing") << endl;
}