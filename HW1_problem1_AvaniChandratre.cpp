/* Student Name: Avani Chandratre   
Homework #1 - CS 115 Section 004   
Due Date: Feb 14, 2020 */

#include <iostream>
using namespace std;

int main()
{
	double savings, expenses;
	cout << "Finance Solvent" << endl;
	cout << "Enter value of savings followed by expenses: " << endl;
	cin >> savings >> expenses;

	if (savings >= expenses)
	{
		savings -= expenses;
		expenses = 0;
	}
	else
		cout << "Bankrupt";

	return 0;
}