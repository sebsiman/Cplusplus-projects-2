#include <iostream>

using namespace std;

int main()
{
    int quizScore;

    cout << "What is your quiz score?" << endl;
    cin >> quizScore;

    while(cin.fail())
    {
        cout << "Incorrect data type. Please enter a number between 1 and 100." << endl;
        cin.clear();
        cin.sync();
        cin >> quizScore;
    }
    while(quizScore < 0 || quizScore > 100)
    {
        cout << "Please enter a number between 1 and 100." << endl;
        cin >> quizScore;
    }
    cout << "Your score is " << quizScore << endl;

    return 0;
}
