#include <iostream>
using namespace std;

int main()
{
    int age;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        // Check eligibility
        if (age < 18)
        {
            throw age; // throwing integer exception
        }

        cout << "You are eligible to vote." << endl;
    }

    catch (int a)
    {
        cout << "Ineligible to vote: Age "
             << a
             << " is below the requirement"
             << endl;
    }

    return 0;
}
