#include <iostream>

using namespace std;

int main()
{
    int userChoice;
    cout << "Welcome to COP 1334 ATM Machine" << endl;
    cout << "Please select one of the following options: " << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Money Market Funds" << endl;
    cout << "5. Exit" << endl;
    cout << "Your choice: ";
    cin >> userChoice;

    if (cin.fail())
    {
        cout << "Wrong data type" << endl;
        cout << "Please run the program again " << endl;
    }
    else
    {
        switch(userChoice)
        {
            case 1:
                cout << "You chose Deposit." << endl;
                break;
            case 2:
                cout << "You chose Withdraw." << endl;
                break;
            case 3:
                cout << "You chose Check Balance."<< endl;
                break;
            case 4:
                cout << "You chose Money Market Funds." << endl;
                break;
            case 5:
                cout << "Thank you. Have a nice day." << endl;
                break;
            default:
                cout << "Please choose 1, 2, 3, 4, or 5 only." << endl;
        }
    }


    /*
    if (cin.fail())
    {
        cout << "Wrong data type" << endl;
        cout << "Please run the program again " << endl;
    }
    else
    {

        if (userChoice == 1)
            cout << "You chose DEPOSIT" << endl;
        else if (userChoice == 2)
            cout << "You chose WITHDRAW" << endl;
        else if (userChoice == 3)
            cout << "You chose CHECK BALANCE" << endl;
        else if (userChoice == 4)
            cout << "You chose MM" << endl;
        else if (userChoice == 5)
            cout << "Thank you. Have a nice day" << endl;
        else
            cout << "Please choose 1,2,3,4 or 5 only!" << endl;

    }
    */
    return 0;
}
