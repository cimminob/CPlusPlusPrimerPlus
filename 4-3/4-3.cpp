// 4-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;


//exercise 4-3 to concatenate strings
int main()
{
    char first[20];
    char last [20];
    char concat[60];
    cout<<"enter first name ", cin>>first;
    cout<<endl<<"enter last name ", cin>>last;
    cout << endl;
    //must use strcpy_s first
    strcpy_s(concat, last);
    strcat_s(concat, ", ");
    strcat_s(concat, first);
    cout<<endl << "here's the information in a single string " << concat;
    
    
    cin.get();
    cin.get();

    return 0;
}

