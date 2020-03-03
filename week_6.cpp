#include <iostream> 
using namespace std;
#include <string>
#include <math.h> 

double crossArea (double r) {
   const double PI = 3.14159;
   double cArea;
   
   cArea = PI*r*r;
   
   return cArea;
}

double sideArea (double r, double h) {
   const double PI = 3.14159;
   double sArea;
   
   sArea = 2*PI*r*h;
   
   return sArea;
}

double totalArea (double r, double h) {
   double tArea;
   
   tArea = crossArea(r) + sideArea(r, h);
   
   return tArea;
}

void customGreeting () {
   string name;
   cout << "What is your name? ";
   getline(std::cin, name);
   
   cout << "Welcome to our office " << name << ", you are all checked in!";
}

double calcMean (double n1, double n2, double n3, double n4) {
   double mean;
   
   mean = (n1 + n2 + n3 + n4)/4;
   
   return mean;
}

double calculateSD (double n1, double n2, double n3, double n4) {
   double sd, mean;
   
   mean = calcMean(n1, n2, n3, n4); 
   
   sd = sqrt( calcMean(pow(mean-n1,2), pow(mean-n2,2), pow(mean-n3,2), pow(mean-n4,2)) );
   
   return sd;
}

int main () {
   cout << crossArea(2) << endl;
   cout << sideArea(2, 2) << endl;
   cout << totalArea(2, 2) << endl;
   customGreeting ();
   cout << endl << "Standard deviation: " << calculateSD (1, 2, 3, 4);
   return 0;
}