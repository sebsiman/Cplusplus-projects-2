#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int userNumber;

    cout << "Enter a positive number: ";
    cin >> userNumber;

    while (cin.fail())
    {
        counter++;
        cout << "Wrong data type." << endl;
        cin.clear();
        cin.sync();
        cout << "Please enter a correct value." << endl;
        cin >> userNumber;
    }

    cout << "You entered: " << userNumber << ". It took you " << counter << " tries to enter it correctly." << endl;

    return 0;
}
