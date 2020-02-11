#include <iostream>
#include <string>
using namespace std;

int main() {

   string fname, lname;
   int birthyear, currentyear, age;
   currentyear = 2020;
   
   cout << "Enter first name: ";
   cin >> fname;
   cout << "\n Enter last name: ";
   cin >> lname;
   cout << "\n Enter birth year: ";
   cin >> birthyear;
   
   age = 2020-birthyear;
      
   cout << "\n Hello, " << fname << " " << lname << " you are " << age << " years old today.";
   
   return 0;
}