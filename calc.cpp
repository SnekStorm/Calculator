#include <iostream>
using namespace std;

string indexNumbers(int start_index, int end_index, int index, string input)
{
	string temp;
	for (int j = 0; j < (end_index-start_index); j++)
	{    
		temp[index] += input[start_index+j];
	}
	return temp;
}

int main()
{
    string input;
    string temp;

    int start_index = 0;
    int end_index = 0;
    int index = 0;

    string numberArray[10];
    

    cout << "hej" << endl;
    cin >> input;

    for (int i = 0; i < size(input)+1; i++)
    {
        end_index = i;  
        if (input[i] == '+')
        {
            indexNumbers(start_index, end_index, index, input);
            //cout << "START: "<< start_index << "  END: " << end_index << endl;
            start_index = end_index+1;
            index++;
            
        }
        
    }
    //cout << "START: "<< start_index << "  END: " << end_index << endl;
    //cout << "both: "<< (end_index-start_index) << "  index: " << index << endl;
    indexNumbers(start_index, end_index, index, input);
	







    cout << "Input: " << input << endl;
    for (int i = 0; i < index+1; i++)
    {
        cout << "Output array: "<< numberArray[i] << endl;
    }

    return 0;
}