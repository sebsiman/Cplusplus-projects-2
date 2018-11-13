#include <iostream>

using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number between 1 and 100." << endl;
    cin >> userNum;

    if(cin.fail())
    {
        cout << "Invalid data type. Please enter a number between 1-100.";
    }
    else if(userNum >= 0 && userNum <= 100)
    {
        cout << "Valid number." << endl;
    }
    else
        cout << "Invalid number, must be between 1-100." << endl;

    return 0;
}
