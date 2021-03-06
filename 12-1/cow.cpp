// 12-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cow.h"
using std::cout;
using std::endl;
using std::cin;


//default Ctor
Cow::Cow(){
   strcpy_s(name, " ");
   hobby = new char[20] {' '};
   weight = 0;
}

//Ctor
Cow::Cow(const char * nm, const char * ho, double wt) 
{
   strcpy_s(name, nm);
   hobby = new char[20];
   strcpy_s(hobby, 20, ho);
   weight = wt;
}
//copy ctor
Cow::Cow(const Cow & c) 
{
   cout << endl << "*.*.*.*.*.*.*In Ctor*.*.*.*.*.*.*";
   strcpy_s(name, c.name);
   //deep copy
   hobby = new char[20];
   strcpy_s(hobby,20,c.hobby);
   weight = c.weight;
}



Cow::~Cow()
{
   delete[] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
   //check for self assignment
   if (this == &c)
      return *this;
   delete[] hobby;
   strcpy_s(name, c.name);
   hobby = new char[20];
   strcpy_s(hobby, 20, c.hobby);
   weight = c.weight;
   return *this;
}

void Cow::ShowCow() const
{
   cout << endl << "name: " << name << "  hobby: " << hobby << "  weight: " << weight;
}



int main()
{
   Cow Mary = Cow("mary", "chewing", 1400);
   Cow Bell = Cow("Bell", "grazing", 1634);
   Cow Blank = Cow();
   Cow CopyCow = Cow("Copy", "copying", 1500);
   Mary.ShowCow();
   Bell.ShowCow();
   CopyCow.ShowCow();
   cout << endl << "...............................";
   cout << endl << "explicit call to Copy constructor";
   cout << endl << "..................................";
   CopyCow = Cow(Bell);
   CopyCow.ShowCow();
   cout << endl << "blank cow, then assignment";
   Blank.ShowCow();
   cout <<endl<< "calling assignment";
   Blank = Mary;
   Blank.ShowCow();
   


   cin.get();
   cin.get();
    return 0;
}

