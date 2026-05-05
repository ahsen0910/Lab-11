#include <iostream>
#include <string>
using namespace std;

// Template Function
template <typename T>
int findItem(T arr[], int size, T target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    // Integer Array (Product IDs)
    int productIDs[] = {101, 102, 103, 104, 105};

    int index1 = findItem(productIDs, 5, 103);

    if (index1 != -1)
    {
        cout << "Product ID found at index: " << index1 << endl;
    }
    else
    {
        cout << "Product ID not found." << endl;
    }

    // String Array (Product Names)
    string productNames[] = {"Mouse", "Keyboard", "Monitor", "Printer"};

    int index2 = findItem(productNames, 4, "Monitor");

    if (index2 != -1)
    {
        cout << "Product Name found at index: " << index2 << endl;
    }
    else
    {
        cout << "Product Name not found." << endl;
    }

    return 0;
}
