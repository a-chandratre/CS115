/* Student Name: Avani Chandratre
Homework #1 - CS 115 Section 004
Due Date: Feb 14, 2020 */

#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter exam score: " << endl;
	cin >> score;

	if (score > 89)
		cout << "A";
	else if (score > 79)
		cout << "B";
	else if (score > 69)
		cout << "C";
	else if (score > 59)
		cout << "D";
	else
		cout << "F";

	return 0;
}