// 17-1.cpp : Defines the entry point for the console application.
/*
1. Write a program that counts the number of characters up to the first $ in input and
that leaves the $ in the input stream.
*/
#include "stdafx.h"
#include <iostream>

int main()
{
   using std::cout;
   using std::cin;
   using std::endl;

   char input[80] = {};
   char ch;
   cout << "enter ch   aracters, $ to stop."<<endl;
   int i = 0;
      while ((ch=cin.peek()) != '$' && ch != '\n')
      {
         cin.get(input[i++]);
      }
      input[i] = '\0';
      cin.clear();
      cin.ignore(80, '\n');
      cout << endl << "your characters are: " << input;
      cin.get();
      cin.get();
    return 0;
}

