#include <iostream>

using namespace std;

int main()
{
    /*
    do
    {

    }(expression/condition);
    */
    int userChoice;

    do
    {
        cout << "Welcome to COP 1334 War Games." << endl;
        cout << "1. Introduce Players" << endl;
        cout << "2. Buy Weapons" << endl;
        cout << "3. Fire Weapons" << endl;
        cout << "4. Exit\n" << endl;
        cin >> userChoice;

        switch(userChoice)
        {
        case 1:
            cout << "Introduce Players\n" << endl;
            break;
        case 2:
            cout << "Buy Weapons\n" << endl;
            break;
        case 3:
            cout << "Fire Weapons\n" << endl;
            break;
        case 4:
            cout << "Goodbye.\n" << endl;
            break;
        default:
            cout << "Please choose 1, 2, 3, or 4.\n" << endl;
        }
    }while(userChoice != 4);

    return 0;
}
