// 11-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vect.h"



// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file

int main()
{
   using namespace std;
   using VECTOR::Vector;
   using VECTOR::Vector;
   srand(time(0));     // seed random-number generator
   double direction;
   Vector step;
   Vector result(0.0, 0.0);
   unsigned long steps = 0;
   double target;
   double dstep;
   
   char filename[30];
   ofstream outfile;//ofstream object to write to
   cout << "enter a filename to write to: ";
   cin.getline(filename, 30);
   outfile.open(filename);
   if (!outfile.is_open()) {
      cout << endl << "unable to open file for writing";
      exit(EXIT_FAILURE);
   }
   cout << "Enter target distance (q to quit): ";
   while (cin >> target)
   {
      cout << "Enter step length: ";
      if (!(cin >> dstep))
         break;

      while (result.magval() < target)
      {
         direction = rand() % 360;
         step.reset(dstep, direction, POL);
         result = result + step;
         steps++;
      }
      cout << "After " << steps << " steps, the subject "
         "has the following location:\n";
      cout << result << endl;
      result.polar_mode();
      cout << " or\n" << result << endl;
      cout << "Average outward distance per step = "
         << result.magval() / steps << endl;
      steps = 0;
      result.reset(0.0, 0.0);
      cout << "Enter target distance (q to quit): ";
   }
   cout << "Bye!\n";
   /* keep window open
   cin.clear();
   while (cin.get() != '\n')
   continue;
   cin.get();
   */
   return 0;
}

/*
Target Distance: 100, Step Size: 20
0: (x,y) = (0, 0)
1: (x,y) = (-11.4715, 16.383)
2: (x,y) = (-8.68807, -3.42232)
...
26: (x,y) = (42.2919, -78.2594)
27: (x,y) = (58.6749, -89.7309)
After 27 steps, the subject has the following location:
(x,y) = (58.6749, -89.7309)
or
(m,a) = (107.212, -56.8194)
Average outward distance per step = 3.97081
*/
