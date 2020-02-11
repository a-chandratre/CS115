#include <iostream>
using namespace std;

int main ()
{
   int age;
   cout << "Enter age: ";
   cin >> age;
   
   if (age <= 12 || age >= 65)
      cout << endl << "Tickets are $10";
   else 
      cout << endl << "Tickets are $15";
      
   return 0;
}