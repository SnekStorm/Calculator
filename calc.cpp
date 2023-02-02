#include "storage.hpp"
using namespace std;


// Index the input, between the seperators
void indexNumbers()
{
	for (int j = 0; j < (memory.end_index-memory.start_index); j++)
	{    
		if(nonInt((int)memory.input[memory.start_index+j] - '0'))
			break;
		
		memory.numberArray[memory.index] += ((int)memory.input[memory.start_index+j] - '0')*(pow(10,((memory.end_index-memory.start_index)-(j+1))));
	}
}

// Finds none Ints, if found delete that segment
bool nonInt(int temp)
{
	//cout << temp << endl;
	if(temp >= 0 && temp <= 9)
		return false;
	cout << "NONE INT FOUND" << endl;
	memory.numberArray[memory.index--] = 0;
	return true;

}

int main()
{
    cout << "Enter formula: ";
    cin >> memory.input;
	//cout << endl;

    for (int i = 0; i < size(memory.input)+1; i++)
    {
        memory.end_index = i;  
        if (memory.input[i] == '+')
        {
            indexNumbers();
            //cout << "START: "<< start_index << "  END: " << end_index << endl;
            memory.start_index = memory.end_index+1;
            memory.index++;
        }

		// temp_c = memory.input[i];
		
		// num += (int) temp_c - 48;
		
		//cout << "Num: " << num << "TEMP_C: " << temp_c << endl;
		
		
        
    }
    indexNumbers();


    cout << "Input: " << memory.input << endl;
    for (int i = 0; i < memory.index+1; i++)
    {
        cout << "Output array: "<< memory.numberArray[i] << endl;
    }
	
	return 0;
}