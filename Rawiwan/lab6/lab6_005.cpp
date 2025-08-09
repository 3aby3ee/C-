#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float calgrade(int score); 

int main()
{
    string Name;
    int score = 0;
    float grade;
    float roomgpa = 0;
    float roomavg = 0;
    int Num;

    cout << "Enter number of students: ";
    cin >> Num;

    cout << fixed << setprecision(1);

    for (int i = 1; i <= Num; i++)
    {
        cout << "*********************************************************" << endl;
        cout << "Enter Student[" << i << "] Name : ";
        cin >> Name;
        cout << "Enter Score: ";
        cin >> score;

        grade = calgrade(score);
        roomgpa += grade;

        cout << left << setw(16) << Name << "Score = "
             << right << setw(3) << score
             << "   Grade = " << grade << endl;
    }

    roomavg = roomgpa / Num;

    cout << "*********************************************************" << endl;
    cout << "ROOM GRADE : " << roomgpa << endl;
    cout << fixed << setprecision(2);
    cout << "AVERAGE OF GRADE = " << roomavg << endl;
    cout << "*********************************************************" << endl;
    cout << "------------------------ End Report ---------------------" << endl;
    cout << "*********************************************************" << endl;

    return 0;
}

float calgrade(int score) 
{
    if (score >= 80) return 4.0;
    else if (score >= 75) return 3.5;
    else if (score >= 70) return 3.0;
    else if (score >= 65) return 2.5;
    else if (score >= 60) return 2.0;
    else if (score >= 55) return 1.5;
    else if (score >= 50) return 1.0;
    else return 0.0;
}
