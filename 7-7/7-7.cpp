// 7-7.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
const int Max = 10;

// function prototypes
double* fill_array( double * Begin, double * end);
void show_array(const double const *, const double const*);  // don't change data
void revalue(double r, double *, double *);

int main()
{
  
   using namespace std;
   double properties[Max];
   
   int start;
   int end;
   cout << "enter starting element number" << endl;
   cin >> start;
   cout << "enter ending element number";
   cin >> end;
   --start, --end;
   //declare and intialize array beginning and end pointers
   double *arrStart, *arrEnd;
   arrStart = properties+start; //address of beginning
   arrEnd = properties+end; //address of end
   
   double* lastFilled = fill_array(arrStart, arrEnd);
   show_array(arrStart, lastFilled);
   
   if (start < end)
   {
      cout << "Enter revaluation factor: ";
      double factor;
      while (!(cin >> factor))    // bad input
      {
         cin.clear();
         while (cin.get() != '\n')
            continue;
         cout << "Bad input; Please enter a number: ";
      }
      revalue(factor, arrStart, lastFilled);
      show_array(arrStart, lastFilled);
   }
   cout << "Done.\n";
   cin.get();
   cin.get();
   return 0;
}

//takes a range
double* fill_array(double * Begin, double * end)
{
   using namespace std;
   double temp;
   
   int i = 0;
   for ( double *pt= Begin; Begin <= end; i++, Begin++)
   {
      cout << "Enter value #" << (i + 1) << ": ";
      cin >> temp;
      if (!cin)    // bad input
      {
         cin.clear();
         while (cin.get() != '\n')
            continue;
         cout << "Bad input; input process terminated.\n";
         break;
      }
      else if (temp < 0)     // signal to terminate
         break;
      Begin[i] = temp;
   }
   return end+1;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double const *begin,const double const * last)
{
   using namespace std;
   int i = 0;
   for (const double *pt=begin; pt < last; pt++, i++)
   {
      cout << "Property #" << (i + 1) << ": $";
      cout << pt[i] << endl;
   }
}

// multiplies each element of ar[] by r
void revalue(double r, double *begin, double* last)
{
   int i = 0;
   for (double *pt=begin; pt < last;pt++, i++)
      pt[i] *= r;
}
