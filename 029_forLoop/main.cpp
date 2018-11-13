#include <iostream>

using namespace std;

int main()
{
    int numGames;
    int points;
    int totalPoints = 0;
    double avgPPG;

    cout << "How many games?" << endl;
    cin >> numGames;

    for (int game = 0; game < numGames; game++)
    {
        cout << "Game #" << game+1 << " points:";
        cin >> points;

        totalPoints = totalPoints + points;
    }

    avgPPG = totalPoints / static_cast<double>(numGames);
    cout << "D. Wade played " << numGames << " games." << endl;
    cout << "He averaged " << avgPPG << " points per game." << endl;

    return 0;
}
