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
   int numberArray[10];
   int start_index = 0;
   int end_index = 0;   
   int index = 0;
   int total = 0;
   int lastSign;

}memory;
   

// Tasks
void indexNumbers();
void int_to_string(string temp);
bool nonInt(int temp);
void sign();
void reset();


#endif