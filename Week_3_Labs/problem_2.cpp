#include <iostream>
using namespace std;

int main ()
{
   double best, current;
   cout << "Enter best time: " ;
   cin >> best;
   cout << endl << "Enter current time: ";
   cin >> current;
   
   if (best > current)
      cout << endl << "Time improved by " << best-current << "s.";
   else 
      cout << endl << "Time did not improve. It took " << current-best << "s longer.";
      
   return 0;
}