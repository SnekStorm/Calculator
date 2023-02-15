#include "storage.hpp"
using namespace std;

class myClass
{
private:
	struct eeprom memory;
public:
	




void reset()
{
	memory.total = 0;
	memory.start_index = 0;
	//memory.input = "";
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
	if(temp >= 0 && temp <= 9)
		return false;
	cout << "NONE INT FOUND" << endl;
	return true;

}

void sign()
{
	switch (memory.lastSign)
		{
		case '+':
			memory.total = (memory.total + memory.numberArray); 
			//cout << "kolla: " << memory.total << endl;
			break;
		case '-':
			memory.total = (memory.total - memory.numberArray); 
			//cout << "kolla: " << memory.total << endl;
			break;
		case '*':
			memory.total = (memory.total * memory.numberArray); 
			//cout << "kolla: " << memory.total << endl;
			break;
		case '/':
			memory.total = (memory.total / memory.numberArray); 
			//cout << "kolla: " << memory.total << endl;
			break;
		
		default:
			memory.total = memory.numberArray;
			//cout << "kolla: " << memory.total << endl;
			break;
		}

}

void decypher()
{
	for ( memory.end_index = 0; memory.end_index < size(memory.input)+1; memory.end_index++)
	{					
		if (memory.input[memory.end_index] == '+' || memory.input[memory.end_index] == '-' || memory.input[memory.end_index] == '*' || memory.input[memory.end_index] == '/' || (int)memory.input[memory.end_index] == 0)
		{
			indexNumbers();
			sign();
			
			memory.start_index = memory.end_index+1;
			memory.lastSign = memory.input[memory.end_index];
		}  
	}
}

void theLoop()
{
while (true)
	{
		cout << "Enter formula: ";
		cin >> memory.input;

		if(memory.input == "exit") {break;}
		decypher();
		
		cout << "Total: " << memory.total << endl;
		reset();
	}
}

};

// int main()
// {
// 	myClass call;
// 	call.theLoop();
// 	return 0;

// }

