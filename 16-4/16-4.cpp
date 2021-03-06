// 16-4.cpp : Defines the entry point for the console application.
/*

Write a function with an old-style interface that has this prototype:
int reduce(long ar[], int n);

The actual arguments should be the name of an array and the number of elements
in the array.The function should sort an array, remove duplicate values, and return a
value equal to the number of elements in the reduced array.Write the function
using STL functions. (If you decide to use the general unique() function, note that
it returns the end of the resulting range.) Test the function in a short program.

*/

#include "stdafx.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::iterator;

int reduce(long ar[], int n); 
int main()
{
   long myarray[] = { 123, 123, 2222, 3333, 4444, 4444, 5555 };
   int myarray_size = sizeof(myarray) / sizeof(long);
   int myvector_size = 0;
   for (auto i : myarray)
      cout << i<<" ";
   cout << "number of elements in myarray is " << myarray_size << endl;
   myvector_size = reduce(myarray, myarray_size);
   cout<<endl << "number of elements in vector is " << myvector_size;
   std::cin.get();
   return 0;
}

int reduce(long ar[], int n) {
   //create array of long ints 
   vector <long> v(ar, ar + n);
   std::sort(v.begin(), v.end());

   auto last = std::unique(v.begin(), v.end());
   v.erase(last, v.end());
   cout << endl << "after sort and reduce: " << endl;
   for (auto i : v)
      cout << i << " ";
   return v.size();
}