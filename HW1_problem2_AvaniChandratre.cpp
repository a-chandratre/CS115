/* Student Name: Avani Chandratre
Homework #1 - CS 115 Section 004
Due Date: Feb 14, 2020 */

#include <iostream>
using namespace std;

int main()
{
	int age;
	char cstatus;

	cout << "Enter age: " << endl;
	cin >> age;
	cout << "Are you a citizen (y/n)" << endl;
	cin >> cstatus;

	if ((age >= 18) && (cstatus == 'y'))
		cout << "You are allowed to vote";
	else
		cout << "You are not allowed to vote";

	return 0;
}