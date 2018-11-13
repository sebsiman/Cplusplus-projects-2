#include <iostream>

using namespace std;

const double TEN_K = 10000.00;
const double INTEREST_RATE = 0.0275;

int main()
{
    double initialCapital;
    double principalAmt;    // accumulator
    double interestAmt;
    int numYears = 0;       // counter

    cout << "Please enter your initial investment amount." << endl;
    cin >> initialCapital;

    principalAmt = initialCapital;

    while(principalAmt < TEN_K)
    {
        interestAmt = principalAmt * INTEREST_RATE;
        principalAmt = principalAmt + interestAmt;
        numYears++;
    }

    cout << "Your initial investment was: $" << initialCapital << endl;
    cout << "Your new total is: $" << principalAmt << endl;
    cout << "It needed " << numYears << " years to reach $" << TEN_K << endl;

    return 0;
}
