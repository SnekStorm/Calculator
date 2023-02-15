#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

// Includes
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Structs
struct 
{  
   string input;
   int numberArray = 0;
   int start_index = 0;
   int end_index;   
   double total = 0;
   int lastSign;

}memory;
   

// Tasks
void indexNumbers();
bool nonInt(int temp);
void sign();
void reset();


#endif