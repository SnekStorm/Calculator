#include "storage.hpp"
using namespace std;
void reset()
{
	memory.total = 0;
	memory.index = 0;
	memory.start_index = 0;
	memory.end_index = 0;
	memory.input = "";
	memory.lastSign = 0;
}

// Index the input, between the seperators
void indexNumbers()
{
	memory.numberArray = 0;
	for (int j = 0; j < (memory.end_index-memory.start_index); j++)
	{    
		if(nonInt((int)memory.input[memory.start_index+j] - '0'))
			break;
		
		memory.numberArray += ((int)memory.input[memory.start_index+j] - '0')*(pow(10,((memory.end_index-memory.start_index)-(j+1))));
	}
}

// Finds none Ints, if found delete that segment
bool nonInt(int temp)
{
	//cout << temp << endl;
	if(temp >= 0 && temp <= 9)
		return false;
	cout << "NONE INT FOUND" << endl;
	memory.numberArray = 0;
	return true;

}

void sign()
{
	switch (memory.lastSign)
		{
		case '+':
			memory.total = (memory.total + memory.numberArray); 
			cout << "kolla: " << memory.total << endl;
			break;
		case '-':
			memory.total = (memory.total - memory.numberArray); 
			cout << "kolla: " << memory.total << endl;
			break;
		case '*':
			memory.total = (memory.total * memory.numberArray); 
			cout << "kolla: " << memory.total << endl;
			break;
		case '/':
			memory.total = (memory.total / memory.numberArray); 
			cout << "kolla: " << memory.total << endl;
			break;
		
		default:
			memory.total = memory.numberArray;
			cout << "kolla: " << memory.total << endl;
			break;
		}

}

int main()
{
	while (true)
	{
			
		
		
		cout << "Enter formula: ";
		cin >> memory.input;

		if(memory.input == "exit") {break;}

		for (int i = 0; i < size(memory.input)+1; i++)
		{
			memory.end_index = i; 
					
			if (memory.input[i] == '+' || memory.input[i] == '-' || memory.input[i] == '*' || memory.input[i] == '/' || (int)memory.input[i] == 0)
			{
				indexNumbers();
				
				sign();

				//cout << "START: "<< start_index << "  END: " << end_index << endl;
				memory.start_index = memory.end_index+1;
				memory.index++;
				memory.lastSign = memory.input[i];
			}  
			cout << "I: " << i << " II: " << (int)memory.input[i] << endl;  
		}

		//indexNumbers();
		//sign();

		
		
		cout << "Input: " << memory.input << endl;
		
		cout << "Total: " << memory.total << endl;
		reset();
	}
	return 0;

}