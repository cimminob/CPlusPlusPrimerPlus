// lotto.cpp -- probability of winning
#include "stdafx.h"
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned field, unsigned picks, unsigned mega);

int main()
{
   using namespace std;
   double field, picks,  mega;
   cout << "Enter the total number of choices in the field, how many you pick and\n the number of mega Numbers:\n";
   while ((cin >> field >> picks>>mega) && picks <= field)
   {
      cout << "You have one chance in ";
      cout << probability(field, picks, mega);      // compute the odds
      cout << " of winning.\n";
      cout << "Next two numbers (q to quit): ";
   }
   cout << "bye\n";
    cin.get();
    cin.get();
   return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned field, unsigned picks, unsigned mega)
{
   long double result = 1.0;  // here come some local variables
   long double f; //assign value of field
   unsigned p; //assign value of picks
   long double SampleSpace; //number of values in sample space 
   //formula is field!/(picks!)(field-picks)!

   for (f=field, p = picks; p > 0; p--, f--)
      result = result * f/p;

   result = result * (1 / mega);
   return mega/result;
}
