#include <iostream>

using namespace std;

const int SENTINEL = -999; // declared universally and not locally because it's scope is throughout the entire program.

int main()
{
    int numUsers = 0;
    int totalSales = 0;
    int purchaseAmount;

    cout << "Enter purchase amount <-999 to quit>:" << endl;
    cin >> purchaseAmount;

    while(cin.fail())
    {
        cout << "Wrong data type." << endl;
        cin.clear();
        cin.sync();
        cout << "Enter purchase amount." << endl;
        cin >> purchaseAmount;
    }
    while(purchaseAmount != SENTINEL)
    {
        totalSales += purchaseAmount;
        numUsers++;
    }


    return 0;
}
