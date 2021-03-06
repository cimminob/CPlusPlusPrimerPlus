// 8-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring> // for strlen(), strcpy()
using namespace std;


struct stringy {
   char * str; // points to a string
   int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
//const before the reference symbol
char aDefault[10]{};


void set(stringy & aStringy, char *Chars);
void show(const stringy & aStringy, int num = 0);
//void show(stringy const & aStringy = { {}, 0 });
//void show(int num, stringy const & aStringy = {});
void show(const stringy & aString, int num);


int main()
{
   stringy beany;
   char testing[] = "Reality isn't what it used to be.";
   set(beany, testing); // first argument is a reference,
                        // allocates space to hold copy of testing,
                        // sets str member of beany to point to the
                        // new block, copies testing to new
                        // and sets ct member of beany



   show(beany); // prints member string once
   show(beany, 2); // prints member string twice
   testing[0] = 'D';
   testing[1] = 'u';
   show(testing); // prints testing string once
   show(testing, 3); // prints testing string thrice
   show("Done!");
   return 0;
}

void set(stringy & aStringy, char * Chars)
{

   aStringy.ct = strlen(Chars);
   aStringy.str = new char[aStringy.ct];
   strcpy(aStringy.str, Chars);
}

void show(const stringy & aStringy, int num = 0)
{
   cout << endl << aStringy.str;
   return;
}

void show(const stringy & aStringy, int num)
{
   for (int i = 0; i < num; i++)
      cout << endl << aStringy.str;
}
      