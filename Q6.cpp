#include <iostream>
#include <string>
using namespace std;

// Custom Exception Class
class BalanceException
{
private:
    string message;
    double balance;

public:
    // Constructor
    BalanceException(string msg, double bal)
    {
        message = msg;
        balance = bal;
    }

    // Getter for message
    string getMessage()
    {
        return message;
    }

    // Getter for balance
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    double balance = 5000;
    double withdrawAmount;

    try
    {
        cout << "Current Balance: " << balance << endl;

        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;

        // Check insufficient balance
        if (withdrawAmount > balance)
        {
            throw BalanceException(
                "Insufficient Balance!",
                balance
            );
        }

        balance -= withdrawAmount;

        cout << "Withdrawal Successful." << endl;
        cout << "Remaining Balance: "
             << balance << endl;
    }

    catch (BalanceException e)
    {
        cout << e.getMessage() << endl;

        cout << "Available Balance: "
             << e.getBalance()
             << endl;
    }

    return 0;
}
