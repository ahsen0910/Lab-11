#include <iostream>
using namespace std;

int main()
{
    double num1, num2;

    try
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        // Check for division by zero
        if (num2 == 0)
        {
            throw "Math Error: Division by zero";
        }

        double result = num1 / num2;

        cout << "Result = " << result << endl;
    }

    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}
