/* Student Name: Avani Chandratre    
Homework #1 - CS 115 Section 004  
Due Date: Feb 14, 2020 */

#include <iostream>
using namespace std;

int main()
{
	int a;
    bool prime = true;
	cout << "Enter number: " << endl;
	cin >> a;

    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << a << " is prime";
    else
        cout << a << " is not a prime";

	return 0;
}