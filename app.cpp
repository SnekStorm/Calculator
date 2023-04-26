#include "storage.hpp"
#include "calc.cpp"
using namespace std;


int main()
{
    

    //call.theLoop();

    super();

    return 0;

}

void super()
{
    myClass MathClass;
    cout << "Enter Formula: ";
    while (MathClass.input())
    {
        MathClass.decypher();

        MathClass.PrintTotal();

        MathClass.reset();
        cout << "To exit enter exit!\n";
        cout << "Enter Formula: ";
    }
}