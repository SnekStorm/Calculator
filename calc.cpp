
#include "storage.hpp"
using namespace std;




void indexNumbers()
{
string temp;
	for (int j = 0; j < (memory.end_index-memory.start_index); j++)
	{    
		 memory.numberArray[memory.index] += memory.input[memory.start_index+j];
	}
}

int main()
{
    cout << "Enter formula: ";
    cin >> memory.input;
	cout << endl;

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
        
    }
    //cout << "START: "<< start_index << "  END: " << end_index << endl;
    //cout << "both: "<< (end_index-start_index) << "  index: " << index << endl;
    indexNumbers();


    cout << "Input: " << memory.input << endl;

    for (int i = 0; i < memory.index+1; i++)
    {
        cout << "Output array: "<< memory.numberArray[i] << endl;
    }

    return 0;
}