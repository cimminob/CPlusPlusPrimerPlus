// 7-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int Fill_array(double *anArray, int length) {
   
   int i = 0;
   
   //stay in bounds of array
   while (i < length) {
      cout << endl << "enter a value ";
      //if input was successful increment i and repeat
      if (cin >> anArray[i])
         i++;
   }
   cout << endl;
   //return number of items entered
   return i;
}

void Show_array(double *anArray, int length) {
   int i = 0;
   cout << endl<<"your values are ";
   while (i < length) {
      cout << anArray[i] << " ";
      i++;
   }
   return;
}

//note the alternate use of array 
void Reverse_array(double anArray[], int length) {
   double temp = 0;
 
   //Only swap until the middle element!!!!!!!!
   int j = length-1;
   for (int i = 0; i < length/2; i++) {
      temp = anArray[i];
      anArray[i] = anArray[j];
      anArray[j] = temp;
         --j;
    }
   return;
}

int main()
{
   int length = 0;
   cout << "enter length of array" << endl;
   cin >> length;
   double* myArray= new double[length];

   //num of inputs
   int numSuccessInputs;
   numSuccessInputs = Fill_array(myArray, length);

   Show_array(myArray, length);

   cout << endl << "calling reverse array "<<endl;
   Reverse_array(myArray, length);
   cout << endl;
   Show_array(myArray, length);

   cin.get();
   cin.get();
   delete [] myArray;
   return 0;
}

