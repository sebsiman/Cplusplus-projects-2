#include <iostream>
#include <ctime>   // to get computer time
#include <cstdlib> // for the rand function

using namespace std;

int main()
{
    int numQuizzes;
    int quizScore;  // store quiz score
    double avg;
    unsigned seed = time(0);  // gets current time
    int totalScore = 0; // accumulator

    cout << "How many quizzes: ";

    while (!(cin >> numQuizzes))
    {
        cout << "Wrong data type" << endl;
        cout << "Enter numeric input only!" << endl;

        cin.clear();

        //cin.sync();
        char ch;
        while(cin.get(ch) && ch != '\n');
        cout << "Your quizScore: ";

    }

    cout << "You entered: " << numQuizzes << endl;

    // initialize random number generator
    srand(seed);

    while (numQuizzes >0)
    {
        quizScore = 1 + rand() % 100;
        cout << "QuizScore: " << quizScore << endl;

        totalScore = totalScore+quizScore;
        numQuizzes--;
    }

    // compute the averge
    avg = totalScore / static_cast<double>(quizScore);
    cout << "Your avg: " << avg << endl;
    return 0;
}
