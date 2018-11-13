#include <iostream>

using namespace std;

int main()
{
    char userChar;

    cout << "Please enter a letter." << endl;
    cin >> userChar;

    {
    switch (userChar)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                cout << userChar << " is a vowel." << endl;
                break;
            default:
                cout << userChar << " is not a vowel." << endl;
            }
    }

    return 0;
}
