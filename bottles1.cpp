#include <iostream>
using namespace std;

int main() {

   double cday, pday, annual;
   double profit = .20;
   cout << "Enter the number of cases sold per day: ";
   cin >> cday;
   
   pday = profit*cday*12;
   annual = pday*365;
   
   cout << "Daily profit is $" << pday << "\n";
   cout << "Annual profit is $" << annual;
   
   return 0;
}
   