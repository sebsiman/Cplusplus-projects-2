#include <iostream>

using namespace std;

int main()
{
    int optionSelected;

    cout << "Welcome to the COP 1334 ATM." << endl;
    cout << "Please select one of the following options: " << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Money Market Funds" << endl;
    cout << "5. Exit" << endl;
    cin >> optionSelected;
    cin.ignore();
    cin.sync();

    if (cin.fail())
    {
        cout << "Incorrect data input." << endl;
        cout << "Please restart the program." << endl;
    }
    else
    {
        if (optionSelected < 1 || optionSelected > 5)
        cout << "Please select a valid option." << endl;

        if (optionSelected == 1)
            cout << "You have selected Deposit.";
        else if (optionSelected == 2)
            cout << "You have selected Withdraw.";
        else if (optionSelected == 3)
            cout << "You have selected Check Balance.";
        else if (optionSelected == 4)
            cout << "You have selected Money Market Funds.";
        else if (optionSelected == 5)
            cout << "Goodbye.";
    }



    return 0;
}
