// 16-5.cpp : Defines the entry point for the console application.

/*

5. Do the same problem as described in Programming Exercise 4, except make it a
template function:
template <class T>
int reduce(T ar[], int n);

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

template <class T>
int reduce(T ar[], int n);

int main()
{
   long myarray[] = { 123, 123, 2222, 3333, 4444, 4444, 5555 };
   int myarray_size = sizeof(myarray) / sizeof(long);
   int myvector_size = 0;
   for (auto i : myarray)
      cout << i << " ";
   cout << "number of elements in myarray is " << myarray_size << endl;
   myvector_size = reduce(myarray, myarray_size);
   cout << endl << "number of elements in vector is " << myvector_size;

   string mystrings[] = { "apple", "apple", "banana", "blueberry",
      "kiwi", "kiwi", "lemon", "mango", "orange", "orange", "strawberry" };
   myarray_size = sizeof(mystrings) / sizeof(string);
   myvector_size = 0;
   for (auto i : myarray)
      cout << i << " ";
   cout << "number of elements in myarray is " << myarray_size << endl;
   myvector_size = reduce(mystrings, myarray_size);
   cout << endl << "number of elements in vector is " << myvector_size;

   std::cin.get();
   return 0;
}

template<class T>
int reduce(T ar[], int n)
{
   //create array 
   vector <T> v(ar, ar + n);
   std::sort(v.begin(), v.end());

   auto last = std::unique(v.begin(), v.end());
   v.erase(last, v.end());
   cout << endl << "after sort and reduce: " << endl;
   for (auto i : v)
      cout << i << " ";
   return v.size();
}
