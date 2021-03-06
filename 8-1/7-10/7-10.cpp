// 7-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Calculate takes two double arguments, and a pointer to a
//function as an argument
double calculate(double x, double y, double(*Pfunction)(double a, double b));
double add(double, double);
int main()
{
   double a, b;
   cout << "enter two values ";
   while (!(cin >> a >> b)) //bad input
   {
      cin.clear();
      while (cin.get() != '\n')
         continue;
      cout << endl << "please enter numbers only" << endl;
   }
   cout << endl << calculate(a, b, add);
   cout << endl;
   cin.get();
   cin.get();
   return 0;
}

double calculate(double x, double y, double(*Pfunction)(double a, double b))
{
   return Pfunction(x, y);
}


double add(double x, double y)
{
   return x+y;
}

