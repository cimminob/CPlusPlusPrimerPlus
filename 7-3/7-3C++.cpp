// 7-3C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct box {
   char maker[40];
   float height;
   float width;
   float length;
   float volume;
};

void display(box aBox);
void modifyVolume(box * aBox);

int main()
{
   int test = 0;
   box myBox{};
   cout << "please enter maker followed by height, width and length" << endl;
   cin >>myBox.maker>> myBox.height>>myBox.length >> myBox.width;
   cout << "dimensions entered are: " << endl;
   display(myBox);
   modifyVolume(&myBox);
   cout << endl << "the volume is " << myBox.volume << endl;
   cin.get();
   cin.get();
   return 0;
}

//pass by value display value of each member
void display(box aBox) {
   cout << aBox.maker << endl;
   cout << aBox.height << " " << aBox.width << "  " << aBox.length<< endl;
}

void modifyVolume(box * aBox) {
   aBox->volume = aBox->height*aBox->length*aBox->width;

}

