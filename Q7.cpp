#include <iostream>
#include <string>
using namespace std;

void checkSecurity(string pass)
{
    // Check password length
    if (pass.length() < 8)
    {
        throw 101;
    }

    bool hasDigit = false;

    // Check for numeric digit
    for (int i = 0; i < pass.length(); i++)
    {
        if (isdigit(pass[i]))
        {
            hasDigit = true;
            break;
        }
    }

    // If no digit found
    if (!hasDigit)
    {
        throw 404.1;
    }

    cout << "Password Accepted." << endl;
}

int main()
{
    string password;

    cout << "Enter password: ";
    cin >> password;

    try
    {
        checkSecurity(password);
    }

    catch (int errorCode)
    {
        cout << "Error Code: "
             << errorCode << endl;

        cout << "Password too short." << endl;

        cout << "Recovery Instruction: "
             << "Use at least 8 characters."
             << endl;
    }

    catch (double errorCode)
    {
        cout << "Error Code: "
             << errorCode << endl;

        cout << "Password lacks numeric digit."
             << endl;

        cout << "Recovery Instruction: "
             << "Add at least one number."
             << endl;
    }

    return 0;
}
