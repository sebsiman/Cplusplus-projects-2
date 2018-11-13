#include <iostream>
#include <iomanip> // formatters

using namespace std;

int main()
{
    string stud1 = "Dwyane Wade";
    string stud2 = "LeGone James";
    string stud3 = "Sebastian Siman";

    double avg1 = 3.8;
    double avg2 = 2.1;
    double avg3 = 4.0;

    char grade1 = 'A';
    char grade2 = 'C';
    char grade3 = 'A';

    cout << left;
    cout << setw(20) << stud1
         << setw(4) << avg1
         << setw(3) << grade1
         << endl;
    cout << setw(20) << stud2
         << setw(4) << avg2
         << setw(3) << grade2
         << endl;
    cout << setw(20) << stud3
         << setw(4) << avg3
         << setw(3) << grade3
         << endl;


    return 0;
}
