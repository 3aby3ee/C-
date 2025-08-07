#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int calgrade(int score);

int main()
{
    string Name;
    int score = 0, grade;
    float roomgpa = 0, roomavg = 0;
    int Num;
    cout << fixed << setprecision(1);
    for (int i = 1; i <= Num; i++)
    {
        cout << "*********************************************************" << endl;
        cout << "Enter Student[" << i << "] Name : " << endl;
        cin >> Name;
        cout << "Enter Score: " << endl;
        cin >> score;
        grade = calgrade(score);
        cout << left << setw(16) << "Nopphagaw.t" << "Score = "
             << right << setw(3) << 90
             << "Grade =" << 4.0 << endl;
    }
    cout << "*********************************************************" << endl;
    cout << "ROOM GRADE :" << roomgpa << endl;
    cout << fixed << setprecision(2);
    cout << "AVERAGE OF GRADE = " << roomavg << endl;
    cout << "*********************************************************" << endl;
    cout << "------------------------ End Report ---------------------" << endl;
    cout << "*********************************************************" << endl;
    return 0;
}
int calgrade(int score)
{
   if (score >= 80) return 4.0;
    else if (score >= 75) return 3.5;
    else if (score >= 70) return 3.0;
    else if (score >= 65) return 2.5;
    else if (score >= 60) return 2.0;
    else if (score >= 55) return 1.5;
    else if (score >= 50) return 1.0;
    else return 0.0;
    return score;
}