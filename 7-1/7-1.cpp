// 7-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


double HarmonicMean(double x, double y){
   return 2.0*x*y / (x + y);
   
}


int main()
{
   using namespace std;
   double x = 0;
   double y = 0;
   cout << "enter a pair of integers, 0 to end" << endl;
   cin >> x >> y;
   while (x != 0 && y != 0) {
      cout<<endl<<HarmonicMean(x, y)<<endl;
      cout << "enter another pair" << endl;
      cin >> x >> y;
    }

    cin.get();
    return 0;
}

