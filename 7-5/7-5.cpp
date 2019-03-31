
#include "stdafx.h"
#include <iostream>

using namespace std;

int factorial(int n) {
   //check if n=0;
   if (n == 0)
      return 1;
   //with recursion
   n*=factorial(n-1);
   return n;
   //without recursion :
   //assign result to n and subtract 1 from n
  /* int result = n--;
   //check n cannot be 0 or 1
   while (n > 1) {
      result *= n;
      --n;
   }
   return result;

   */

}

int main()
{
   int n = 0;
   int answer = 0;
   cout << "enter an int ";
   cin >> n;
   answer = factorial(n);
   cout << endl << n << "! is " << answer << endl;
   cin.get();
   cin.get();
   return 0;
}

