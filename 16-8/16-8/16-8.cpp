// 16-8.cpp : Defines the entry point for the console application.
/*
8. Mat and Pat want to invite their friends to a party.They ask you to write a program
   that does the following:

   a. Allows Mat to enter a list of his friends’ names.The names are stored in a
      container and then displayed in sorted order.

   b. Allows Pat to enter a list of her friends’ names.The names are stored in a second
      container and then displayed in sorted order.

   c. Creates a third container that merges the two lists, eliminates duplicates, and
      displays the contents of this container.
*/

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

typedef std::list<string> stringList;

stringList makeList(string aname);

int main()
{
   string name;
   stringList Mat=makeList("Mat");
   Mat.sort();
   stringList Pat=makeList("Pat");
   Pat.sort();
   Mat.merge(Pat);
   cout << endl;
   for (auto i : Mat)
      cout << i << " ";
   cin.get();
   cin.get();
   return 0;
}

stringList makeList(string aname)
{
   string name;
   stringList aList;
   cout << "Enter "<<aname<<"'s list, Q to quit ";
   while (getline(cin, name)) {
      if (name == "Q")
         break;
      else
         aList.push_back(name);
   }
   return aList;
}
