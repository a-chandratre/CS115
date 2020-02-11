/* Student Name: Avani Chandratre
Homework #1 - CS 155 Section 004
Due Date: Feb 14, 2020 */

#include <iostream>
using namespace std;

int main()
{
	int num, ans = 1;
	cout << "Enter number: " << endl;
	cin >> num;

	for (int x = 1; x <= num; x++)
		ans *= x;

	cout << ans;

	return 0;
}