#include <iostream>
using namespace std;

int main ()
{
   string days[] = {"Monday", "Teusday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
   int day_num;
   cout << "Enter day number of day of week: ";
   cin >> day_num;
   
   cout << endl << days[day_num-1];
      
   return 0;
}