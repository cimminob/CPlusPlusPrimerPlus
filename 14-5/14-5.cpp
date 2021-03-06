// 14-5.cpp : Defines the entry point for the console application.
// useemp1.cpp -- using the abstr_emp classes


/*
Note that the class hierarchy uses MI with a virtual base class, so keep in mind the
special rules for constructor initialization lists for that case.Also note the presence
of some protected-access methods.This simplifies the code for some of the
highfink methods. (Note, for example, that if highfink::ShowAll() simply
calls fink::ShowAll() and manager::ShowAll(), it winds up calling
abstr_emp::ShowAll() twice.) Provide the class method implementations and test
the classes in a program.

*/




#include "stdafx.h"
#include <iostream>
#include "emp.h"


using namespace std;

int main(void)
{
   employee em("Trip", "Harris", "Thumper");
   cout << em << endl;
   em.ShowAll();
   manager ma("Amorphia", "Spindragon", "Nuancer", 5);
   cout << ma << endl;
   ma.ShowAll();
   fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
   cout << fi << endl;
   fi.ShowAll();
   highfink hf(ma, "Curly Kew"); // recruitment?
   hf.ShowAll();
   cout << "Press a key for next phase:\n";
   cin.get();
   highfink hf2;
   hf2.SetAll();
   cout << "Using an abstr_emp * pointer:\n";
   abstr_emp * tri[4] = { &em, &fi, &hf, &hf2 };
   for (int i = 0; i < 4; i++)
      tri[i]->ShowAll();
   return 0;
}

/*
Why is no assignment operator defined?

Why are ShowAll() and SetAll() virtual?

Why is abstr_emp a virtual base class?

Why does the highfink class have no data section?

Why is only one version of operator<<() needed?

What would happen if the end of the program were replaced with this code?

abstr_emp tri[4] = {em, fi, hf, hf2};

for (int i = 0; i < 4; i++)

*/