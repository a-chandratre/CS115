#include <iostream>
using namespace std;

int main() {
   int feet, inches, weight;
   cout << "Height in feet: ";
   cin >> feet >> inches;
   
   if (feet > 5)
   {
      inches += (feet-5)*12;
      weight = 110 + (inches*5);
   }
   else
      weight = 110;
      
  cout << "Ideal weight: " << weight;   
   

   return 0;
}