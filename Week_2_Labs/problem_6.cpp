#include <iostream>
#include <string>
using namespace std;

int main() {
   int a, b;
   bool ans;
   
   cout << "Enter number (a): ";
   cin >> a;
   cout << "Enter number (b): ";
   cin >> b;
   
   ans = (0 && 0);
   cout << "0 && 0: " << ans << "\n";  
   ans = (0 && 1);
   cout << "0 && 1: " << ans << "\n";  
   ans = (1 && 0);
   cout << "1 && 0: " << ans << "\n";  
   ans = (1 && 1);
   cout << "1 && 1: " << ans << "\n\n";  
   
   ans = (!0 && 0);
   cout << "!0 && 0: " << ans << "\n";  
   ans = (!0 && 1);
   cout << "!0 && 1: " << ans << "\n";  
   ans = (!1 && 0);
   cout << "!1 && 0: " << ans << "\n";  
   ans = (!1 && 1);
   cout << "!1 && 1: " << ans << "\n\n";  
   
   ans = (0 || 0);
   cout << "0 || 0: " << ans << "\n";  
   ans = (0 || 1);
   cout << "0 || 1: " << ans << "\n";  
   ans = (1 || 0);
   cout << "1 || 0: " << ans << "\n";  
   ans = (1 || 1);
   cout << "1 || 1: " << ans << "\n\n";  
      
   ans = (a > b);
   cout << "a > b: " << ans << "\n";  
   ans = (a >= b);
   cout << "a >= b: " << ans << "\n";     
   ans = (a < b);
   cout << "a < b: " << ans << "\n";     
   ans = (a <= b);
   cout << "a <= b: " << ans << "\n\n";     

   return 0;
}