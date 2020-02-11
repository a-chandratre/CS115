#include <iostream>
using namespace std;

int main() {
   int a, b, c;
   c = 0;
   
   cout << "Enter number (a): ";
   cin >> a;
   cout << "Enter number (b): ";
   cin >> b;
   
   c = a;
   a = b;
   b = c;
   
   cout << "a = " << a << " b = " << b;
   
   return 0;
}