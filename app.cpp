#include "storage.hpp"
#include "calc.cpp"
using namespace std;


int main()
{
    super();

    return 0;
}

void super()
{
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