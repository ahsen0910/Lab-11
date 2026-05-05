#include <iostream>
using namespace std;

// Template Class
template <typename T>
class Processor
{
private:
    T value;

public:
    // Constructor
    Processor(T v)
    {
        value = v;
    }

    // Reciprocal Function
    double reciprocal()
    {
        // Exception condition
        if (value == 0)
        {
            throw value;
        }

        return 1.0 / value;
    }
};

int main()
{
    try
    {
        Processor<int> p1(0);

        cout << "Reciprocal = "
             << p1.reciprocal()
             << endl;
    }

    // Catch-all handler
    catch (...)
    {
        cout << "Critical System Failure"
             << endl;
    }

    return 0;
}
