#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

/**   The FeetInches class holds distances measured in
feet and inches.*/

class FeetInches
{
   private:
      int total_inches;
      /**   The simplify method adjusts the values
      in feet and inches to conform to a
      standard measurement.   */

       /**      This constructor assigns 0 to the feet
      and inches fields.   */

      public:
         FeetInches()
         {
            total_inches = 0;
         }

/**      This constructor accepts two arguments which
         are assigned to the feet and inches fields.
         The simplify method is then called.
         @param f The value to assign to feet.
         @param i The value to assign to inches.   */

      FeetInches(int f, int i)
      {
         total_inches = (f*12)+i;
      }

/**      The following is a copy constructor. It accepts a
         reference to another FeetInches object. The feet
         and inches fields are set to the same values as
         those in the argument object.
         @param object2 The object to copy.   */

     FeetInches (const FeetInches& object2)
     {
        total_inches = object2.total_inches;
     }

/**  The setFeet method assigns a value to
     the total_inches field.
     @param f The value to assign to feet.   */

     void setTotalInches(int f, int i)
     {
         total_inches = (f*12)+i;
     }

/**  getTotalInches method
     @return The value in the feet field.   */

    int getTotalInches()
    {
      return total_inches;
    }

/**      print method      prints the distance as feet/inches   */
    void print()
    {
      cout << total_inches/12 << " feet  " << total_inches%12 << " inches";
    }

/**      The add method returns a FeetInches object
         that holds the sum of this object and another
         FeetInches object.
         @param object2 The other FeetInches object.
         @return A reference to a FeetInches object.   */

    FeetInches add(const FeetInches& object2)
    {
      int totalFeet,    // To hold the sum of feet
      totalInches;  // To hold the sum of inches
      totalFeet = (total_inches + object2.total_inches)/12;
      totalInches =(total_inches + object2.total_inches)%12;
      return FeetInches(totalFeet, totalInches);
    }

    FeetInches scale(int s)
    {
      return FeetInches(s*(total_inches/12), s*(total_inches%12));
    }

/**      The equals method compares this object to the
         argument object. If both have the same values,
         the method returns true.
         @return true if the objects are equal, false
         otherwise.   */

    bool equals(FeetInches object2)
    {
      return total_inches == object2.total_inches;
    }
};

int main()
{
   FeetInches f(0, 30), g;
   int ft, in;
   cout << "Length 1 = ";
   f.print();
   cout << endl;
   cout << "\nEnter length 2 feet: ";
   cin >> ft;
   cout << "Enter length 2 inches: ";
   cin >> in;
   g.setTotalInches(ft, in);
   cout << "\nLength 2 = ";
   g.print();
   cout << endl;

   if (f.equals(g))
      cout << "\nThe lengths are the same\n\n";
   else
      cout << "\nThe lengths are not the same\n\n";

   FeetInches h = f.add(g);
   cout << "Sum of length 1 and 2 = ";
   h.print();
   cout << endl;
   cout << "2 * length 1 = ";
   f.scale(2).print();
   cout << endl;
   cout << "3 * length 2 = ";
   g.scale(3).print();
   cout << endl;
   //getchar();
   return 0;
}
