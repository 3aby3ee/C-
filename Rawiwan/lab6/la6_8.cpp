/*  6806021412089 รวิวรรณ เชียงดา 14/08/2568 3:12    */
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
float calendar();
float calGrade();
void power_Number();
int main()
{
    char choice;

    for (;;)
    {
        cout << "********************************************************" << endl;
        cout << "*                       Menu                           *" << endl;
        cout << "********************************************************" << endl;
        cout << "Program Calculate  " << endl;
        cout << "1 Calendar                                   [1/9/C]" << endl;
        cout << "2 Power Number                               [2/P/N]" << endl;
        cout << "3 Grade                                        [3/G]" << endl;
        cout << "X Exit                                     [E/X/I/T]" << endl;
        cout << "********************************************************" << endl;
        cout << "Select menu [1/2/3/X] : ";

        cin >> choice;
        cout << choice << endl;

        if (choice == '1' || choice == '9' || choice == 'C')
        {
            calendar();
        }
        else if (choice == '2' || choice == 'P' || choice == 'N')
        {
            power_Number();
        }
        else if (choice == '3' || choice == 'G' || choice == '3')
        {
            calGrade();
        }

        else if (choice == '4' || choice == 'E' || choice == 'X' || choice == 'I' || choice == 'T')
        {
            cout << ". . .Exit program . . ." << endl;
            break;
        }
        else
        {
            cout << "You choose out of rang is not proces.\n ";
        }
    }
    return 0;
}
float calendar()
{
     time_t t = time(nullptr);
    tm* now = localtime(&t);

    int year = now->tm_year + 1900;
    int month = now->tm_mon + 1;

    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    bool leapYear = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
    if (leapYear && month == 2)
        daysInMonth[1] = 29;


    tm firstDay = *now;
    firstDay.tm_mday = 1;
    mktime(&firstDay);
    int startDay = firstDay.tm_wday;  

    string monthName[] = { "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December" };

    cout << "\n     " << monthName[month - 1] << " " << year << endl;
    cout << "Su Mo Tu We Th Fr Sa" << endl;

    for (int i = 0; i < startDay; i++) cout << "   ";

    for (int day = 1; day <= daysInMonth[month - 1]; day++) {
        cout << setw(2) << day << " ";
        if ((startDay + day) % 7 == 0) cout << endl;
    }
    cout << "\n" << endl;

    return 0;
}
void power_Number() {
    long long result;
    int p;

    do {
        cout << "Enter Power Number (1-12): ";
        cin >> p;

        if (p < 1 || p > 12) {
            cout << " Try again." << endl;
        }
    } while (p < 1 || p > 12);

    for (int n = 10; n >= 1; n--) {
        result = 1;
        for (int i = 1; i <= n; i++) {
            result *= p;
        }
        cout << p << "^" << n << " = " << result << endl;
    }
}
float calGrade()
{
    string Name;
    int score;

    cout << "Enter Name : ";
    cin >> Name;
    cout << "Enter Score : ";
    cin >> score;

    string grade;

    if (score >= 90 && score <= 100)
        grade = "S";
    else if (score >= 89 && score <= 80)
        grade = "A";
    else if (score >= 79 && score <= 70)
        grade = "B";
    else if (score >= 69 && score <= 60)
        grade = "C";
    else if (score >= 35 && score <= 59)
        grade = "D";
    else if (score >= 0 && score <= 34)
        grade = "F";
    else
        grade = "Error";

    cout << "Name: " << Name << ", Score: " << score << ", Grade: " << grade << endl;
    return 0;
}
