#include <iostream>
using namespace std;

int main() {

   double cday, pday, annual, decade;
   double profit = .22;
   cout << "Enter the number of cases sold per day: ";
   cin >> cday;
   
   cout << "Bottles sold per day: " << cday*12;
   
   
   pday = profit*cday*12;
   annual = pday*365;
   decade = annual*10;
   
   cout << "Daily profit is $" << pday << "\n";
   cout << "Annual profit is $" << annual << "\n";
   cout << "Profit in ten year is $" << decade << "\n";
   
   return 0;
}
   