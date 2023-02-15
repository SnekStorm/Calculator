#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

#pragma once
// Includes
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Structs
struct eeprom
{  
   string input;
   int numberArray = 0;
   int start_index = 0;
   int end_index;   
   double total = 0;
   int lastSign;

};
   

// Tasks
void indexNumbers();
bool nonInt(int temp);
void sign();
void reset();


#endif